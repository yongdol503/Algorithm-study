# Solving...
n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
arr = list(zip(a, b))
arr = sorted(arr, key=lambda x: (x[0] * x[1], x[0]))
print(arr)