#include<stdio.h>

int i,n,m,v,cnt=0,front=0;
int cheak[1001]={0,},arr[1001][1001]={0,},order[10000]={0,};

void dfs(int node)
{
    cheak[node]=1;
    order[cnt]=node;
    cnt++;
    for(i=1;i<=n;i++)
    {
        if(arr[node][i]==1 && cheak[i]==0)
            dfs(i);
    }
}

void bfs(int node)
{
    for(i=1;i<=n;i++)
    {
        if(arr[node][i]==1 && cheak[i]==0)
        {
            cheak[i]=1;
            order[cnt]=i;
            cnt++;        
        }
    }
    return;
}

int main()
{
    scanf("%d %d %d",&n,&m,&v);
    for(i=0;i<m;i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        arr[a][b]=arr[b][a]=1;
    }
    dfs(v);
    for(i=0;i<cnt;i++)
    {
        printf("%d ",order[i]);
        order[i]=0;
    }
    printf("\n");
    for(i=1;i<=n;i++)
        cheak[i]=0;
    cnt=0;
    cheak[v]=1;
    order[cnt]=v;
    cnt++;
    bfs(v);
    for(i=front;i<cnt;i++)
    {
        front++;
        bfs(order[i]);
    }
    for(i=0;i<cnt;i++)
    {
        printf("%d ",order[i]);
    }    
    return 0;
}