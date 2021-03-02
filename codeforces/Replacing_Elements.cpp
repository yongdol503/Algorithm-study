//complete
#include<iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n, d, a, min1=101, min2=102, max=0;
        cin>>n>>d;
        for(int j=0;j<n;j++)
        {
            cin>>a;
            if(a<=min1)
            {
                min2=min1;
                min1=a;
            }
            else if(a<=min2)
                min2=a;
            if(a>max)
                max=a;
        }
        if((max<=d) || ((min1+min2)<=d))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}