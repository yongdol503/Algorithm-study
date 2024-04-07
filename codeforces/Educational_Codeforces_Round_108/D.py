# Accepted
"""
- 전부 계산해도 시간 초과가 되지 않는 n의 크기였다.
-> 그냥 구현하면 되는 문제였음
- 특정 두 a항을 교체하는 것뿐 아니라 사이 전체 항을 뒤집어 계산하는 문제였다.
-> 단순 i,j 반복문이 아니라, 기준점을 기반으로 뒤집은 결과도 계산 할 수 있게 구현해야 함
"""
n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
tmp = sum([a[i] * b[i] for i in range(n)])

total = tmp

for i in range(n):
    l, r = i - 1, i + 1
    base = tmp
    while 0 <= l and r < n:
        base -= (a[l] - a[r]) * (b[l] - b[r])
        total = max(total, base)
        l -= 1
        r += 1

    l, r = i, i + 1
    base = tmp
    while 0 <= l and r < n:
        base -= (a[l] - a[r]) * (b[l] - b[r])
        total = max(total, base)
        l -= 1
        r += 1

print(total)
