#!/usr/bin/python3
import sys 
import socket
import math
from tkinter import *

# ----------------------------------------------------------------------
# 1.0 Process the command line arguments, to get the port number.
if ( len(sys.argv) == 2) :
    trick_varserver_port = int(sys.argv[1])
else :
    print( "Usage: vsclient <port_number>")
    sys.exit()

# ----------------------------------------------------------------------
# 2.0 Set client Parameters.
HEIGHT, WIDTH = 500, 800   # Canvas Dimensions
MARGIN = 20                # Margins around the axes
SCALE = 3                  # Scale = 3 pixels per meter
ballRadius = 5             # Ball radius in pixels

# ----------------------------------------------------------------------
# 3.0 Create constants for clarity.
MODE_FREEZE = 1 
MODE_RUN = 5 

# ----------------------------------------------------------------------
# 4.0 Create a variable to indicate that we want to "fire" the cannon,
#     and a callback function to set it.
fireCommand = False
def cannonFire():
    global fireCommand
    fireCommand = True

# ----------------------------------------------------------------------
# 5.0 Create the GUI

# 5.1 Create a Canvas to draw on.
tk = Tk()
canvas = Canvas(tk, width=WIDTH, height=HEIGHT)
tk.title("CannonBall Display")
canvas.pack()

# 5.2  Add a FIRE button, whose callback sets the fireCommand variable.
buttonFrame = Frame()
buttonFrame.pack(side=BOTTOM)
fireButton = Button(buttonFrame,text="fire",command=cannonFire)
fireButton.pack(side=LEFT)

# 5.3 Add an Initial Speed Scale.
speedScale = Scale(buttonFrame, from_=5, to=50, label="Initial Speed", orient=HORIZONTAL)
speedScale.pack(side=LEFT)
speedScale.set(50)

# 5.4 Add an Initial Angle Scale.
angleScale = Scale(buttonFrame, from_=5, to=80, label="Initial Angle", orient=HORIZONTAL)
angleScale.pack(side=LEFT)
angleScale.set(30)

# 5.5 Create coordinate axes on the canvas.
xAxis = canvas.create_line(MARGIN,HEIGHT-MARGIN,WIDTH,HEIGHT-MARGIN)
yAxis = canvas.create_line(MARGIN,HEIGHT-MARGIN,MARGIN,0)

# 5.6 Create an oval object to represent the cannonball.
cannonBall = canvas.create_oval(0,0,ballRadius,ballRadius, fill="orange")

# 5.7 Create a text field on the canvas for the simulation mode display.
modeText = canvas.create_text(WIDTH/2, 20, text="--unknown-mode--")

# 5.8 Create text fields on the canvas for time and position of impact display.
impactTimeText = canvas.create_text(WIDTH/2, 40, text="")
impactPosText =  canvas.create_text(WIDTH/2, 60, text="")

# ----------------------------------------------------------------------
# 6.0 Connect to the variable server.
client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
client_socket.connect( ("localhost", trick_varserver_port) )
insock = client_socket.makefile("r")

# ----------------------------------------------------------------------
# 7.0 Request the cannon ball position, the sim mode, and the impact info.
client_socket.send( b"trick.var_set_client_tag(\"myvsclient\") \n")
client_socket.send( b"trick.var_debug(3)\n" )
client_socket.send( b"trick.var_pause()\n" )
client_socket.send( b"trick.var_ascii()\n" )
client_socket.send( b"trick.var_add(\"dyn.cannon.pos[0]\") \n" +
                    b"trick.var_add(\"dyn.cannon.pos[1]\") \n" +
                    b"trick.var_add(\"trick_sys.sched.mode\")\n" +
                    b"trick.var_add(\"dyn.cannon.impact\") \n" +
                    b"trick.var_add(\"dyn.cannon.impactTime\") \n" )
client_socket.send( b"trick.var_unpause()\n" )

# ----------------------------------------------------------------------
# 8.0 Repeatedly read and process the responses from the variable server.
while(True):
    # 8.1 Read the response line from the variable server.
    line = insock.readline()
    if line == '':
        break

    # 8.2 Split the line into an array of value fields.
    field = line.split("\t")

    # 8.3 Get the position of the ball and update it on the canvas.
    x,y = float(field[1]), float(field[2])
    cx,cy = (x*SCALE+MARGIN), (HEIGHT-y*SCALE-MARGIN)
    canvas.coords(cannonBall,cx-ballRadius,cy-ballRadius,cx+ballRadius,cy+ballRadius)

    # 8.4 Get and display current Sim Mode.
    simMode = int(field[3])
    if simMode == MODE_FREEZE:
        canvas.itemconfigure(modeText, fill="blue", text="FREEZE")
    elif simMode == MODE_RUN:
        canvas.itemconfigure(modeText, fill="red", text="RUN")
    else:
        canvas.itemconfigure(modeText, text="--unknown-mode--")

    # 8.5 When impact occurs display the impact info, and command the sim from RUN mode to FREEZE mode.
    impact = int(field[4])
    if simMode == MODE_RUN:
        if impact:
            # 8.5.1 Display the impact info on the canvas.
            canvas.itemconfigure(impactTimeText, text="Impact time = " + field[5])
            canvas.itemconfigure(impactPosText, text="Impact pos  = (" + field[1] + "," + field[2] + ")")
            # 8.5.2 Command the sim to FREEZE mode.
            client_socket.send( b"trick.exec_freeze()\n")

    # 8.6 When the "Fire" button is pressed, command the sim from FREEZE mode to RUN mode.
    if simMode == MODE_FREEZE:
        if fireCommand:
            fireCommand = False
            fireButton.config(state=DISABLED)
            # 8.6.1 Command the sim to assign the slider values to init_speed, and init_angle.
            client_socket.send( b"dyn.cannon.init_speed = " + bytes(str(speedScale.get()), 'UTF-8') + b" \n")
            client_socket.send( b"dyn.cannon.init_angle = " + bytes(str(angleScale.get()*(math.pi/180.0)), 'UTF-8') + b" \n")
            # 8.6.2 Command the sim to re-run the cannon_init job.
            client_socket.send( b"dyn.cannon.cannon_init()\n")
            # 8.6.3 Command the sim to RUN mode.
            client_socket.send( b"trick.exec_run()\n")
    
    # 8.7 Update the Tk graphics.
    tk.update()

# ----------------------------------------------------------------------
# 9.0 Keep the window open, when the data stops.
tk.mainloop()