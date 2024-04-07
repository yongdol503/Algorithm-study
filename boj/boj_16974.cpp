#include <bits/stdc++.h>

using namespace std;

vector<long long> buger(51), p(51);

long long solve(long long n, long long x)
{
    if (buger[n] == x || buger[n] - 1 == x)
    {
        return p[n];
    }
    else if (buger[n - 1] + 2 < x)
    {
        return p[n - 1] + 1 + solve(n - 1, x - buger[n - 1] - 2);
    }
    else if (buger[n - 1] + 2 == x)
    {
        return p[n - 1] + 1;
    }
    else if (buger[n - 1] + 1 == x)
    {
        return p[n - 1];
    }
    else if (x == 1)
    {
        return 0;
    }
    else
    {
        return solve(n - 1, x - 1);
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    buger[0] = p[0] = 1;
    for (int i = 1; i <= 50; i++)
    {
        buger[i] = buger[i - 1] * 2 + 3;
        p[i] = p[i - 1] * 2 + 1;
    }

    long long n, x;
    cin >> n >> x;

    cout << solve(n, x) << "\n";

    return 0;
}
