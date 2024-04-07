#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, ans = 0;
    cin >> n;

    if (n == 0)
    {
        ans = 1;
    }
    else if (n < 0)
    {
        ans = 32;
    }
    else
    {
        while (n)
        {
            ans++;
            n >>= 1;
        }
    }

    cout << ans << "\n";

    return 0;
}
