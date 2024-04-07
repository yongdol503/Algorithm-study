
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<long long> v(1000001);
    v[1] = 1;
    for (int i = 2; i < 1000001; i++)
    {
        v[i] = v[i - 1] + v[i - 2];
    }

    int n;
    cin >> n;
    cout << v[n] << "\n";

    return 0;
}