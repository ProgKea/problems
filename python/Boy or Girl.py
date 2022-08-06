n = input()
n = "".join(set(n))

if len(n) % 2 == 0:
    print("CHAT WITH HER!")
else:
    print("IGNORE HIM!")