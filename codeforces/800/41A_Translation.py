s = input()
t = input()
rev = ""
for i in range(len(s)) :
    rev = rev + s[len(s)-i-1]
if rev == t :
    print("YES")
else:
    print("NO")