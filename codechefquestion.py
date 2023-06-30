t = int(input())

while t > 0:
    t-=1
    n,b = map(int,input().split())
    a = list(map(int,input().split()))
    l = []
    for i in a:
        if(i&b == b):
            l.append(i)
    if len(l) == 0:
     print("NO")
    else:
       x=l[0]
       for i in l:
          x = x&i
       if(x==b):
          print("YES")
       else:
          print("NO")
