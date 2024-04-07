#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n;
    vector<int> v(n + 1);
    cin >> v[1];
    for (int i = 2; i <= n; i++)
    {
        cin >> v[i];
        v[i] += v[i - 1];
    }
    cin >> m;

    vector<vector<int>> dp(3, vector<int>(n + 1));
    for (int i = m; i <= n; i++)
    {
        if (dp[0][i - 1] < v[i] - v[i - m])
        {
            dp[0][i] = v[i] - v[i - m];
        }
        else
        {
            dp[0][i] = dp[0][i - 1];
        }

        if (dp[1][i - 1] < dp[0][i - m] + v[i] - v[i - m])
        {
            dp[1][i] = dp[0][i - m] + v[i] - v[i - m];
        }
        else
        {
            dp[1][i] = dp[1][i - 1];
        }

        if (dp[2][i - 1] < dp[1][i - m] + v[i] - v[i - m])
        {
            dp[2][i] = dp[1][i - m] + v[i] - v[i - m];
        }
        else
        {
            dp[2][i] = dp[2][i - 1];
        }
    }

    cout << dp[2][n] << "\n";

    return 0;
}
