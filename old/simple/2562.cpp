#include<iostream>

using namespace std;

int main()
{
    int max=0,idx;
    for(int i=0;i<9;i++)
    {
        int n;
        cin>>n;
        if(max<n)
        {
            max=n;
            idx=i;
        }
    }
    cout<<max<<"\n"<<idx+1;
    return 0;
}