n = int(input())

while n > 0:
    a = int(input())
    l = list(map(int,input().split()))
    sum  = 0
    for i in range(len(l)):
        sum += l[i]
    if sum%4 == 0:
        print("YES")          
    else:
        print("NO")
    n -=1