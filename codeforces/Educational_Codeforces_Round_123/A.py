n = int(input())
for _ in range(n):
    flag = True
    key_door = {
        "r": 0,
        "g": 0,
        "b": 0
    }
    map_str = input()
    for ch in map_str:
        if ch.islower():
            key_door[ch] += 1
        else:
            if key_door[ch.lower()] > 0:
                key_door[ch.lower()] -= 1
            else:
                flag = False
                break
    if flag:
        print("YES")
    else:
        print("NO")
