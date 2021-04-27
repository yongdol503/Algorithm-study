#include<iostream>

using namespace std;

int main()
{
    int m,n,min,sum=0;
    int pnum[10001];
    for(int i=2;i<=10000;i++)
        pnum[i]=1;
    for(int i=2;i*i<=10000;i++)
        if(pnum[i])
            for(int j=i*i;j<=10000;j+=i)
                pnum[j]=0;
    cin>>m>>n;
    for(int i=m;i<=n;i++)
        if(pnum[i])
        {
            if(!sum)
                min=i;
            sum+=i;
        }
    if(!sum)
        cout<<"-1\n";
    else
        cout<<sum<<"\n"<<min<<"\n";
    return 0;
}