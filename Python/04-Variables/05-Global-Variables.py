"""
    Global variables can be used by the entire file.

    A variable with the same name can be created locally,
    and it will be used within the function instead
    of the global variable.

    However, the global keyword can be use to create
    a global variable within a function.
"""

x = "awesome"

def myfunc():
  print("Python is " + x)

def myfunc2():
  x = "fantastic"
  print("Python is " + x)

def myfunc3():
  global x
  x = "fantastic"

myfunc()
myfunc2()
print("Python is " + x)
myfunc3()
print("Python is " + x)