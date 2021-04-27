N,Q=map(int,input().split())
S=input()
for _ in range(Q):
    x=int(input())
    lRock=S.find("R",0,x)
    rRock=S.find("R",x)
    print(rRock,lRock)
    rPotato=S.count("P",0 if rRock==-1 else rRock,x)
    lPotato=S.count("P",x,N-1 if lRock==-1 else lRock)
    if(rRock!=-1 and lRock!=-1):
        print("%d -1"%(rPotato+lPotato))
    elif(lRock!=-1): #왼쪽 돌 막힘
        time=(lRock-x)*(0 if rPotato<lPotato else rPotato-lPotato)
        print(type(lRock),type(N))
        for n,i in enumerate(S[lRock+1,N]):
            if(i=="P"):
                time+=(abs(n-x)*2)
        time+=(N-x)
        print("%d %d"%(rPotato+(lPotato if lPotato<rPotato else rPotato),time))
    elif(rRock!=-1): #오른쪽 돌 막힘
        time=(rRock-x)*(0 if (lPotato+1)<rPotato else (lPotato+1-rPotato))
        for n,i in enumerate(S[0,rRock]):
            if(i=="P"):
                time+=(abs(n-x)*2)
        time+=(x+1)
        print("%d %d"%(lPotato+((lPotato+1) if (lPotato+1)<rPotato else rPotato),time))
    else:
        if((lPotato+1)<rPotato):
            time+=(x+1)
            pcnt=0
            for n,i in enumerate(S[0,N]):
                if(i=="P"):
                    time+=(abs(n-x)*2)
                    pcnt+=1
                    if(pcnt==(lPotato*2+1)):
                        break
            print("%d %d"%(lPotato*2+1,time))
        else:
            time+=(N-x)
            pcnt=0
            for n,i in enumerate(S[-1,0]):
                if(i=="P"):
                    time+=(abs(n-x)*2)
                    pcnt+=1
                    if(pcnt==(rPotato*2)):
                        break
            print("%d %d"%(rPotato*2,time))
