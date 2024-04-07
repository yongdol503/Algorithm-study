#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int l, r, cnt = 0;
    cin >> l >> r;

    while (l != r)
    {
        if (l + 1 <= r)
        {
            l /= 10;
            r /= 10;
        }
    }

    while (l)
    {
        if (l % 10 == 8)
        {
            cnt++;
        }
        l /= 10;
    }

    cout << cnt;

    return 0;
}