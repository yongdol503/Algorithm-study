#include "bits/stdc++.h"

using namespace std;

int min = 1000000001, max = -1000000001;

void solve(int n, int &ans, vector<int> &v, vector<int> &o)
{
    if (n == 1)
    {
        for (auto i = 0; i < o.size(); i++)
        {
            if (o[i])
        }
    }
    else
    {
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, ans;
    cin >> n;
    vector<int> v(n), o(4);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ans = v[0];
    for (int i = 0; i < 4; i++)
    {
        cin >> o[i];
    }
    solve(n - 1, ans, v, o);
    return 0;
}