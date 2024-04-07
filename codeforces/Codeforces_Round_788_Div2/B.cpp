#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        int n,m,last=0,ans=0;
        int check[30]={0};
        string s;
        cin>>n;
        cin>>s;
        cin>>m;
        for(int j=0;j<m;j++)
        {
            char tmp;
            cin>>tmp;
            check[tmp-'a']=1;
        }

        for(int j=0;j<n;j++)
        {
            if(check[s[j]-'a'])
            {
                ans=ans>(j-last)?ans:(j-last);
                last=j;
            }
        }
        cout<<ans<<"\n";
    }

    return 0;
}