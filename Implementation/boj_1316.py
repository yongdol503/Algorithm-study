t = int(input())
cnt = 0
for _ in range(t):
    word = input()
    cnt += 1
    for i in range(len(word) - 1):
        if word[i] in word[i + 1 :]:
            if not word[i] == word[i + 1]:
                cnt -= 1
                break
print(cnt)
