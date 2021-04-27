t=int(input())
for _ in range(t):
    n=int(input())
    level_list=list(map(int,input().split()))
    level_list.sort()
    print(len(level_list)-level_list.count(level_list[0]))