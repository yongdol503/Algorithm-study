n=int(input())
cnt=0
for num in range(1,n+1):
    while(num>0):
        digit=num%10
        num//=10
        if(digit==3 or digit==6 or digit==9):
            cnt+=1
print(cnt)