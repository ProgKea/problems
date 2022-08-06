n = input()
unlucky = ["1", "2", "3", "5", "6", "8", "9", "0"]
lucky = ["4", "7"]


if any(x in n for x in lucky) and not any(x in n for x in unlucky):
    print("YES")

elif int(n) % 4 == 0 or int(n) % 7 == 0 or int(n) % 47 == 0 or int(n) % 74 == 0:
    print("YES")

else:
    print("NO")
