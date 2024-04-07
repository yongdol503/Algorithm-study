# Accepted
t = int(input())
for _ in range(t):
    r, b, d = map(int, input().split())
    if r < b:
        r, b = b, r
    if r - b <= d:
        print("YES")
    elif r / b <= d + 1:
        print("YES")
    else:
        print("NO")
