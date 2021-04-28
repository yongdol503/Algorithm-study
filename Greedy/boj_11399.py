n = int(input())
p = list(map(int, input().split()))
p = sorted(p)
ans = 0
for i, num in enumerate(p):
    ans += num * (n - i)
print(ans)