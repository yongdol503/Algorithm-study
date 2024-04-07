#include <bits/stdc++.h>

using namespace std;

int dp[102][5];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    dp[0][0] = 1;

    for (int i = 0; i < 100; i++)
    {
        dp[i + 1][0] += dp[i][0];
        dp[i + 2][0] += dp[i][0] * 2;
        dp[i + 1][1] += dp[i][0];
        dp[i + 1][2] += dp[i][0];
        dp[i + 2][4] += dp[i][0];
        dp[i + 1][0] += dp[i][1];
        dp[i + 1][2] += dp[i][1];
        dp[i + 1][0] += dp[i][2];
        dp[i + 1][1] += dp[i][2];
        dp[i + 1][0] += dp[i][3];
        dp[i + 1][4] += dp[i][3];
        dp[i + 1][3] += dp[i][4];
    }

    while (t--)
    {
        int n;
        cin >> n;
        cout << dp[n][0] << "\n";
    }

    return 0;
}
