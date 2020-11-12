#include<iostream>

using namespace std;

int eratosthenes[1000001]={1,1};
int m,n;

int main()
{
    for(int i=2;i<=1000;i++)
        for(int j=i*2;j<1000001;j+=i)
            eratosthenes[j]=1;
    cin>>m>>n;
    for(int i=m;i<=n;i++)
        if(eratosthenes[i]==0)
            cout<<i<<"\n";
    return 0;
}