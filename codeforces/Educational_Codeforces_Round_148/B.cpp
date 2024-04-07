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
        int n, k;
        long long total = 0, sum = 0, ans = 0;
        cin >> n >> k;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            total += v[i];
        }
        sort(v.begin(), v.end());

        for (int i = 0; i < k; i++)
        {
            sum += (v[i * 2] + v[i * 2 + 1]);
        }
        if (total - sum > ans)
        {
            ans = total - sum;
        }

        for (int i = 0; i < k; i++)
        {
            sum -= (v[(k - i - 1) * 2] + v[(k - i - 1) * 2 + 1]);
            sum += v[n - 1 - i];
            if (total - sum > ans)
            {
                ans = total - sum;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
