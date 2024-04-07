origin = list(map(lambda n: sum(map(int, n.split("+"))), input().split("-")))
print(origin[0] - sum(origin[1:]))
