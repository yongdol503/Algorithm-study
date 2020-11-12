a,b,c,d,e,f=map(int,input().split())
y=(a*f-c*d)/(a*e-b*d)
x=(c/a)-(b/a)*y
print(int(x),int(y))