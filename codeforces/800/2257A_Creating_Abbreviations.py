n = int(input())

while n > 0:
    a,b = map(int,input().split())
    l = list()
    m = list()

    for i in range(a):
        l.append(input()[0].upper())

    for i in range(b):
        m.append(input())
    boolean = True
    for i in range(b) :
        for char in m[i]:
            if not char in l:
                boolean = False
    if boolean:
        print("YES")
    else:
        print("NO")          
    n = n - 1