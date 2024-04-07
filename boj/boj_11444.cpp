#include <bits/stdc++.h>
#define MOD 1000000007

using namespace std;

vector<vector<long long>> solve(long long n)
{
    vector<vector<long long>> ret(2, vector<long long>(2));
    if (n < 2)
    {
        ret[0][0] = 1;
        ret[0][1] = 1;
        ret[1][0] = 1;
        ret[1][1] = 0;
        return ret;
    }

    vector<vector<long long>> a = solve(n / 2);
    if (n % 2)
    {
        ret[0][0] = (a[0][0] * a[0][0] % MOD + a[0][1] * a[1][0] % MOD + a[0][0] * a[0][1] % MOD + a[0][1] * a[1][1] % MOD) % MOD;
        ret[0][1] = (a[1][0] * a[0][0] % MOD + a[1][1] * a[1][0] % MOD + a[1][0] * a[0][1] % MOD + a[1][1] * a[1][1] % MOD) % MOD;
        ret[1][0] = (a[0][0] * a[0][0] % MOD + a[0][1] * a[1][0] % MOD) % MOD;
        ret[1][1] = (a[0][0] * a[0][1] % MOD + a[0][1] * a[1][1] % MOD) % MOD;
    }
    else
    {
        ret[0][0] = (a[0][0] * a[0][0] % MOD + a[0][1] * a[1][0] % MOD) % MOD;
        ret[0][1] = (a[0][0] * a[0][1] % MOD + a[0][1] * a[1][1] % MOD) % MOD;
        ret[1][0] = (a[1][0] * a[0][0] % MOD + a[1][1] * a[1][0] % MOD) % MOD;
        ret[1][1] = (a[1][0] * a[0][1] % MOD + a[1][1] * a[1][1] % MOD) % MOD;
    }
    return ret;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n;
    cin >> n;

    vector<vector<long long>> ans = solve(n);

    cout << ans[0][1] % MOD;

    return 0;
}