n = int(input())
while n > 0:
    a = int(input())
    s = input()
    counter = 0
    max = 0
    for i in range(a):
        if s[i] == '*':
            if max <= counter:
                max = counter
            counter = 0
        else:
            counter += 1
            if max <= counter:
                max = counter

    if max %2 == 0:
        print(max//2)
    else:
        print((max+1)//2)
    n-=1