def GCD(a,b):
    if(not a%b):
        return b
    else:
        return GCD(b,a%b)

t=int(input())
for __ in range(t):
    s1=input()
    s1l=len(s1)
    s2=input()
    s2l=len(s2)
    gcd=GCD(s1l,s2l)
    lcm=s1l*s2l/gcd
    if(s2*int(lcm/s2l)==s1*int(lcm/s1l)):
        print(s1*int(lcm/s1l))
    else:
        print(-1)