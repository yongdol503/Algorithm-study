#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    int len = s.size();

    if (len == 1)
    {
        cout << s << " " << s;
    }
    else if (len == 2)
    {
        if (s[0] + 1 == s[1])
        {
            cout << s[0] << " " << s[1];
        }
        else
        {
            cout << s << " " << s;
        }
    }
    else if (len == 3)
    {
        if (s[0] == '9')
        {
            cout << "9 10";
        }
        else if (s[0] + 2 == s[2])
        {
            cout << s[0] << " " << s[2];
        }
        else
        {
            cout << s << " " << s;
        }
    }
    else
    {
        
    }

    return 0;
}