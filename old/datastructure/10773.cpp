#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> jangboo;
    int n,ans=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int n;
        cin>>n;
        if(n)
            jangboo.push_back(n);
        else
            jangboo.pop_back();
    }
    for(auto n:jangboo)
        ans+=n;
    cout<<ans;
    return 0;
}