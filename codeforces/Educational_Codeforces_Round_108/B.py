#Accepted
cell = [[0] * 101 for _ in range(101)]
for i in range(1, 101):
    for j in range(1, 101):
        if i + 1 <= 100:
            cell[i + 1][j] = cell[i][j] + j
        if j + 1 <= 100:
            cell[i][j + 1] = cell[i][j] + i

t = int(input())
for _ in range(t):
    n, m, k = map(int, input().split())
    if cell[n][m] == k:
        print("YES")
    else:
        print("NO")
