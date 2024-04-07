#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> h(708), dp(n + 1);
    for (int i = 1; i < 708; i++)
    {
        h[i] = h[i - 1] + (i - 1) * 4 + 1;
    }

    for (int i : h)
    {
        dp[i];
    }

    return 0;
}