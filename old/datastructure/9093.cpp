#include<iostream>
#include<string>
#include<algorithm>
#include<stack>

using namespace std;

int main()
{
    int n;
    stack<char> s;
    cin>>n;
    cin.get();
    for(int i=0; i<n; i++)
    {
        string str;
        getline(cin,str);
        str+='\n';
        for(char ch : str)
        {
            if(ch=='\n' || ch==' ')
            {
                while(!s.empty())
                {
                    cout<<s.top();
                    s.pop();
                }
                cout<<ch;
            }
            else
                s.push(ch);
        }
    }
    return 0;
}