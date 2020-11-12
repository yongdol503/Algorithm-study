#include<iostream>

using namespace std;

int main()
{
    int x,y,a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    y=(a*f-c*d)/(a*e-b*d);
    x=(e*c-b*f)/(a*e-b*d);
    cout<<x<<" "<<y;
    return 0;
}