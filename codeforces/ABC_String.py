t = int(input())
for _ in range(t):
    str_abc = input()
    cnt = list()
    cnt.append([str_abc.count("A"), "A"])
    cnt.append([str_abc.count("B"), "B"])
    cnt.append([str_abc.count("C"), "C"])
    cnt.sort()
    if cnt[-1][0] == (cnt[0][0] + cnt[1][0]):
        ans = 0
        flag = True
        str_abc = (
            str_abc.replace(cnt[-1][1], "(")
            .replace(cnt[0][1], ")")
            .replace(cnt[1][1], ")")
        )
        for ch in str_abc:
            if str_abc[0] == ch:
                ans += 1
            else:
                ans -= 1
            if ans < 0:
                flag = False
                break
        print("YES" if flag else "NO")
    else:
        print("NO")
