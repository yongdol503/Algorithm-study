#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<long long> dp(1001);
    dp[0] = dp[1] = 1;
    for (int i = 2; i <= 1000; i++)
    {
        for (int j = i / 2; j >= 0; j--)
        {
            dp[i] += dp[j];
        }
    }

    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << dp[n] << "\n";
    }

    return 0;
}
