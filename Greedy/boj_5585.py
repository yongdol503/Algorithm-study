n = 1000 - int(input())
ans = 0
yen_set = [500, 100, 50, 10, 5, 1]
for yen in yen_set:
    ans += n // yen
    n = n % yen
print(ans)
