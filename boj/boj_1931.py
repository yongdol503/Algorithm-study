from operator import itemgetter

n = int(input())
time_list = list()
for _ in range(n):
    time_list.append(list(map(int, input().split())))
time_list = sorted(time_list, key=itemgetter(1, 0))
last_time = 0
cnt = 0
for time in time_list:
    if time[0] < last_time:
        continue
    cnt += 1
    last_time = time[1]
print(cnt)
