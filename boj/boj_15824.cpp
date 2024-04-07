#include <bits/stdc++.h>
#define MOD 1000000007

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n, ans = 0;
    cin >> n;

    vector<long long> v(n), pow2(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    pow2[0] = 1;
    for (int i = 1; i < n; i++)
    {
        pow2[i] = (pow2[i - 1] * 2) % MOD;
    }

    for (int i = 0; i < n; i++)
    {
        ans = (ans + (v[i] * (pow2[i] - pow2[n - 1 - i] + MOD) % MOD)) % MOD;
    }

    cout << ans;

    return 0;
}