def check(n):
    x = 0
    for _ in range(len(n)):
        try:
            l = n[x:]
            i = l.index("0")
            k = l.index("1")
        except:
            FutureWarning
        if abs(i-k) < 7:
            x += 1
        elif k >= 7 or i >= 7:
            return True
        elif abs(i-k) >= 7:
            return True
        if n[-7::] == "0000000" or n[-7::] == "1111111":
            return True

if check(input()):
    print("YES")
else:
    print("NO")