#include "bits/stdc++.h"

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, one = 0, mul = 0, ans = 0;
    bool zero = false;
    cin >> n;
    vector<int> v[2];
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        if (tmp == 1)
        {
            one++;
        }
        else if (tmp == 0)
        {
            zero = true;
        }
        else if (tmp < 0)
        {
            v[0].push_back(tmp);
        }
        else
        {
            v[1].push_back(tmp);
        }
    }

    sort(v[0].begin(), v[0].end());
    sort(v[1].rbegin(), v[1].rend());

    for (int i : v[0])
    {
        if (mul)
        {
            ans += (mul * i);
            mul = 0;
        }
        else
        {
            mul = i;
        }
    }

    if (!zero)
    {
        ans += mul;
    }
    mul = 0;

    for (int i : v[1])
    {

        if (mul)
        {
            ans += (mul * i);
            mul = 0;
        }
        else
        {
            mul = i;
        }
    }

    cout << ans + mul + one << "\n";

    return 0;
}