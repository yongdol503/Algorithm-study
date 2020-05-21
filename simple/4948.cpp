#include<iostream>

using namespace std;

int main()
{
    int *pn = new int[250000]{0,1};
    for(int i=3; i<250000; i++)
        for(int j=2; j*j<=i; j++)
            if(i%j==0)
                pn[i]=1;
    while(1)
    {
        int n, cnt=0;
        cin>>n;
        if(!n)
            return 0;
        for(int i=n+1;i<=2*n;i++)
            if(!pn[i])
                cnt++;
        cout<<cnt<<endl;
    }
    return 0;
}