#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int t, n, k;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n>>k;
        k=k<n?k*(ceil(n/(float)k)):k;
        cout<<int(ceil(k/(float)n))<<"\n";
    }
    return 0;
}