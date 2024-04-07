#include <bits/stdc++.h>

using namespace std;

void dp(vector<vector<int>> &v, vector<long long> &delay, vector<bool> &fix, int current)
{
    long long max = 0;
    for (int prev : v[current])
    {
        if (!fix[prev])
        {
            dp(v, delay, fix, prev);
        }

        if (max < delay[prev])
        {
            max = delay[prev];
        }
    }
    delay[current] += max;
    fix[current] = true;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k, w;
        cin >> n >> k;

        vector<vector<int>> v(n + 1);
        vector<long long> delay(n + 1);
        vector<bool> fix(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> delay[i];
        }

        for (int i = 0; i < k; i++)
        {
            int x, y;
            cin >> x >> y;
            v[y].push_back(x);
        }

        cin >> w;

        dp(v, delay, fix, w);

        cout << delay[w] << "\n";
    }

    return 0;
}