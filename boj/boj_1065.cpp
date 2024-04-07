#include <bits/stdc++.h>

using namespace std;

bool check(int n)
{
    int idx = 0;
    int num[4];
    while (n)
    {
        num[idx++] = n % 10;
        n /= 10;
    }

    for (int i = 2; i < idx; i++)
    {
        if (num[0] - num[1] != num[i - 1] - num[i])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, ans = 99;
    cin >> n;

    if (n < 100)
    {
        cout << n << "\n";
        return 0;
    }

    for (int i = 111; i <= n; i++)
    {
        ans += check(i);
    }

    cout << ans << "\n";

    return 0;
}
