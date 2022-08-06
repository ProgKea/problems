n = 0

for i in range(int(input())):
    friend = input()
    friends = friend[0] + friend[2] + friend[4]
    if int(friends) >= 2:  # count function would have been better
        n += 1

print(n)