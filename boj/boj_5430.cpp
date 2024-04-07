#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, l, r;
        bool flag = false;
        string cmd, num, tmp = "";
        cin >> cmd >> n >> num;
        l = 0;
        r = n - 1;

        vector<int> v;
        for (int i = 1; i < num.size(); i++)
        {
            if (tmp != "" && (num[i] == ',' || num[i] == ']'))
            {
                v.push_back(stoi(tmp));
                tmp = "";
            }
            else
            {
                tmp += num[i];
            }
        }

        for (auto ch : cmd)
        {
            if (ch == 'R')
            {
                flag = !flag;
            }
            else
            {
                if (flag)
                {
                    r--;
                }
                else
                {
                    l++;
                }
            }
        }
        if (r < l)
        {
            if (r + 1 == l)
            {
                cout << "[]\n";
            }
            else
            {
                cout << "error\n";
            }
            continue;
        }

        cout << "[";
        if (flag)
        {
            for (int i = r; i > l; i--)
            {
                cout << v[i] << ",";
            }
            cout << v[l];
        }
        else
        {
            for (int i = l; i < r; i++)
            {
                cout << v[i] << ",";
            }
            cout << v[r];
        }
        cout << "]\n";
    }
    return 0;
}