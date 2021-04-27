#include<stdio.h>

int i,tree,sum,N,a,b;

int main()
{
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&tree);
        a+=(tree/2);
        b+=(tree%2);
        sum+=tree;
    }
    if(sum%3)
    {
        printf("NO");
        return 0;
    }
    if(!sum)
    {
        printf("YES");
        return 0;
    }
    do
    {
        if(a==b)
        {
            printf("YES");
            return 0;
        }
        a--;
        b+=2;
    }while(a>=b);
    printf("NO");
    return 0;
}