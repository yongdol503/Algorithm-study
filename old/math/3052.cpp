#include<iostream>

using namespace std;

int main()
{
    int flag[42]={0,};
    int n,ans=0;
    for(int i=0;i<10;i++)
    {
        cin>>n;
        flag[n%42]=1;
    }
    for(int i=0;i<42;i++)
        ans+=flag[i];
    cout<<ans;
    return 0;
}