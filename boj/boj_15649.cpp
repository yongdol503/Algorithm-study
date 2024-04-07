#include "bits/stdc++.h"

using namespace std;

void solve(int &m, vector<int> &v, vector<bool> &check)
{
    if (m == v.size())
    {
        for (auto &i : v)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
    else
    {
        for (auto i = 0; i < check.size(); i++)
        {
            if (check[i])
            {
                continue;
            }
            check[i] = true;
            v.push_back(i + 1);
            solve(m, v, check);
            v.pop_back();
            check[i] = false;
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    vector<int> v;
    vector<bool> check(n);
    solve(m, v, check);
    return 0;
}