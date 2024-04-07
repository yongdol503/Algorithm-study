def dfs(i, j):
    global n
    global map_list
    global length
    global dx
    global dy

    map_list[i][j] = 0
    length += 1
    for x, y in zip(dx, dy):
        if (0 > i + x) or (i + x >= n) or (0 > j + y) or (j + y >= n):
            continue
        if map_list[i + x][j + y]:
            dfs(i + x, j + y)


n = int(input())
map_list = []
dx = [1, 0, -1, 0]
dy = [0, 1, 0, -1]
for _ in range(n):
    map_list.append(list(map(int, list(input()))))

cnt = []
for i in range(n):
    for j in range(n):
        if map_list[i][j]:
            length = 0
            dfs(i, j)
            cnt.append(length)
print(len(cnt))
print("\n".join(map(str, sorted(cnt))))
