#include "bits/stdc++.h"

using namespace std;

void solve(int &n, int &m, vector<int> &v)
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
        for (auto i = 0; i < n; i++)
        {
            v.push_back(i + 1);
            solve(n, m, v);
            v.pop_back();
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
    solve(n, m, v);
    return 0;
}