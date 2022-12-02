string = input("enter a string: ")
reversed_string = ""

for i in range(len(string)):
    reversed_string += string[-(i+1)]

print(reversed_string)
