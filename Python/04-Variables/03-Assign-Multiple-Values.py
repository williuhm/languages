"""
    Assigning multiple variables in one line is pretty common,
    just not something that I do very often.

    Unpacking from an array is pretty neat.
"""

x, y, z = "Orange", "Banana", "Cherry"
print(x)
print(y)
print(z)

x = y = z = "Orange"
print(x)
print(y)
print(z)

fruits = ["apple", "banana", "cherry"]
x, y, z = fruits
print(x)
print(y)
print(z)