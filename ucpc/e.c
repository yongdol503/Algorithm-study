#include<stdio.h>

char ch[1000100],ch2[1000100];

int main()
{
    int i,N,Q;
    scanf("%d %d",&N,&Q);
    scanf("%s",ch);
    for(i=0;i<Q;i++)
    {
        int x, pcnt=0, rpos=-999, time=0, tmp=0, dir=1;
        scanf("%d",&x);
        x--;
        
        while(1)
        {
            x+=dir;
            time++;
            if(x<0 || x>=N)
                break;
            else if(ch[x]=='P')
            {
                if(tmp)
                    tmp--;
                else
                {
                    tmp=pcnt++;
                    dir=-dir;
                }
            }
            else if(ch[x]=='R')
            {
                if(rpos==x || rpos==-999)
                {
                    rpos=x;
                    tmp=pcnt;
                    dir=-dir;
                }
                else
                {
                    time=-1;
                    break;
                }
            }
        }
        printf("%d %d\n",pcnt,time);
    }
    return 0;
}