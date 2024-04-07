#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    vector<int> v(10001);
    cin >> n;

    for (int i = n; i > 0; i--)
    {
        if (v[i])
        {
            continue;
        }

        int tmp = 2;
        while (i >= tmp)
        {
            tmp <<= 1;
        }

        v[i] = tmp - i;
        v[tmp - i] = i;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << v[i] << "\n";
    }

    return 0;
}
