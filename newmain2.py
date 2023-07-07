t = int(input())

for x in range(t):
    n  = int(input())
    s = input()
    f = 0
    c = 0
    for i in range(n):
        if(s[i] == ":" and f >= 2):
            c+=1
            f=1
        elif(s[i] == ":"):
            f  = 1
        elif(s[i] == ")" and f >= 1):
            f  += 1
        else:
            f = 0
    print(c)
