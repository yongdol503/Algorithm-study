#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, ans = 0;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = n - 1; i > 0; i--)
    {
        if (v[i] <= v[i - 1])
        {
            ans += v[i - 1] - v[i] + 1;
            v[i - 1] = v[i] - 1;
        }
    }

    cout << ans << "\n";

    return 0;
}