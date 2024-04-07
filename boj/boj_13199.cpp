#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int p, m, f, c, ans = 0, bonus;
        cin >> p >> m >> f >> c;
        bonus = (m / p * c) / f * c + (m / p * c) % f;
        while (bonus >= f)
        {
            ans += (bonus / f);
            bonus = bonus / f * c + bonus % f;
        }
        cout << ans << "\n";
    }

    return 0;
}