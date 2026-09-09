n = int(input())
while n > 0:
    counter = 0
    boolean = True
    l = list(map(int,input().split()))
    while boolean :
        if(l[0] == l[1] or l[1] == l[2] or l[0] == l[2]):
            boolean = False
            continue
        l[l.index(max(l))] = max(l) - 1
        l[l.index(min(l))] = min(l) + 1
        counter += 1
    print(counter)
    n -= 1