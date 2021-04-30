from collections import deque


def dfs(v):
    global graph
    global rst_dfs

    rst_dfs.append(v)
    for i in graph[v]:
        if i not in rst_dfs:
            dfs(i)


def bfs():
    global graph
    global rst_bfs
    global q

    while q:
        v = q.popleft()
        for i in graph[v]:
            if i not in rst_bfs:
                q.append(i)
                rst_bfs.append(i)


n, m, v = map(int, input().split())
graph = dict(zip([i for i in range(1, n + 1)], [list() for _ in range(n)]))

for _ in range(m):
    a, b = map(int, input().split())
    graph[a].append(b)
    graph[b].append(a)
for key in graph.keys():
    graph[key] = sorted(graph[key])

rst_dfs = []
dfs(v)
print(*rst_dfs)

rst_bfs = [v]
q = deque([v])
bfs()
print(*rst_bfs)
