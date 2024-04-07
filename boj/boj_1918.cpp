#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    stack<char> st;
    cin >> s;

    for (auto &ch : s)
    {
        if (isalpha(ch))
        {
            cout << ch;
        }
        else
        {
            switch (ch)
            {
            case '+':
            case '-':
            {
                while (st.size())
                {
                    auto t = st.top();
                    st.pop();
                    if (t == '+' || t == '-' || t == '*' || t == '/')
                    {
                        cout << t;
                    }
                    else
                    {
                        st.push(t);
                        break;
                    }
                }
                st.push(ch);
                break;
            }
            case '*':
            case '/':
            {
                while (st.size())
                {
                    auto t = st.top();
                    st.pop();
                    if (t == '*' || t == '/')
                    {
                        cout << t;
                    }
                    else
                    {
                        st.push(t);
                        break;
                    }
                }
                st.push(ch);
                break;
            }
            case '(':
            {
                st.push(ch);
                break;
            }
            case ')':
            {
                while (st.size())
                {
                    auto t = st.top();
                    st.pop();
                    if (t == '(')
                    {
                        break;
                    }
                    else
                    {
                        cout << t;
                    }
                }
                break;
            }
            }
        }
    }

    while (st.size())
    {
        cout << st.top();
        st.pop();
    }

    return 0;
}