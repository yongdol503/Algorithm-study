#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int l = 0, r, min = 2000000001, min_l, min_r;
    cin >> r;
    vector<int> v(r);
    for (int i = 0; i < r; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    r--;
    for (int i = 1; i < v.size(); i++)
    {
        if (abs(v[l] + v[r]) < min)
        {
            min_l = l;
            min_r = r;
            min = abs(v[l] + v[r]);
        }

        if (abs(v[l + 1] + v[r]) < abs(v[l] + v[r - 1]))
        {
            l++;
        }
        else
        {
            r--;
        }
    }

    cout << v[min_l] << " " << v[min_r] << "\n";

    return 0;
}