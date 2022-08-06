import random

n = random.randrange(100)
number_guessed = False
x = int(input("Guess the number: "))

while not number_guessed:
    if x == n:
        print("You guessed the number!")
        number_guessed = True
    elif x < n:
        print("Your number is smaller!")
        x = int(input("Guess the number: "))
    elif x > n:
        print("Your number is bigger!")
        x = int(input("Guess the number: "))