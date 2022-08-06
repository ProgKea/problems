n = int(input())

for i in range(n):
    i = input()
    if len(i) > 10:
        print(i[0] + str(len(i) - 2) + i[len(i)-1])
    else:
        print(i)