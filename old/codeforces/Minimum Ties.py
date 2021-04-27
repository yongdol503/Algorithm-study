t=int(input())

for _ in range(t):
    n=int(input())
    for i in range(1,n):
        if(n%2):
            if(i%2):
                print("1 -1 "*((n-i)//2),end="")
            else:
                print("1 -1 "*((n-i-1)//2)+"1 ",end="")
        else:
            if(i%2):
                print("0 "+"1 -1 "*((n-i-1)//2),end="")
            else:
                print("-1 1 "*((n-i)//2),end="")
    print()