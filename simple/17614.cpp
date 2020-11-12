#include<iostream>

using namespace std;

int main()
{
    int num,count=0;
    cin>>num;
    for(int i=3;i<=num;i++)
    {
        int tmp=i;
        while(tmp>2)
        {
            int digit=tmp%10;
            tmp/=10;
            if(digit==3 || digit==6 || digit==9)
            {
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}
