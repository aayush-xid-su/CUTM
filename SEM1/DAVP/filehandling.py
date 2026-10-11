# import os
# print(os.getcwd())

"""
file = open("practice.txt", "w")

file.write("Ayush Das\n")
file.write("i am just learning file handling\n")

file.close()
"""

"""
file = open("practice.txt","r")
context = file.read()
print(context)
file.close()
"""

"""
with open("practice.txt", "r") as file:
    content = file.read()
print(content)
"""

"""
try:
    with open("practice.txt","r") as file:
        print(file.read())

except FileNotFoundError:
    print("Error: The request file does not exist. ")
"""