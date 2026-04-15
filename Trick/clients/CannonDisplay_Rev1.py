#!/usr/bin/python3
import sys
import socket

# 1.0 Process the command line arguments.
if ( len(sys.argv) == 2) :
    trick_varserver_port = int(sys.argv[1])
else :
    print( "Usage: python<version_number> CannonDisplay_Rev1.py <port_number>")
    sys.exit()

# 2.0 Connect to the variable server.
client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
client_socket.connect( ("localhost", trick_varserver_port) )
insock = client_socket.makefile("r")

# 3.0 Request the cannon ball position.
client_socket.send( b"trick.var_pause()\n" )
client_socket.send( b"trick.var_ascii()\n" )
client_socket.send( b"trick.var_add(\"dyn.cannon.init_angle\")\n")
client_socket.send( b"trick.var_send()\n" )
line = insock.readline()
print(line)
client_socket.send( b"trick.var_clear()\n" )
client_socket.send( b"trick.var_add(\"dyn.cannon.pos[0]\") \n" +
                    b"trick.var_add(\"dyn.cannon.pos[1]\") \n"
                  )
client_socket.send( b"trick.var_unpause()\n" )

# 4.0 Repeatedly read and process the responses from the variable server.
while(True):
    line = insock.readline()
    if line == '':
        break

    print(line)