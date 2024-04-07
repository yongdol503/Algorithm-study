#include <bits/stdc++.h>

using namespace std;

void custom_sort(vector<int> &v, int s)
{
    for (int i = 0; i + 1 < v.size(); i++)
    {
        int max = 0, idx;
        for (int j = i; j < v.size() && j <= i + s; j++)
        {
            if (max < v[j])
            {
                max = v[j];
                idx = j;
            }
        }

        for (int j = idx; j > i; j--)
        {
            swap(v[j], v[j - 1]);
            s--;
            if (s == 0)
            {
                return;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, s;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cin >> s;

    if (n * (n - 1) / 2 <= s)
    {
        sort(v.begin(), v.end(), [](const int &a, const int &b)
             { return a > b; });
    }
    else
    {
        custom_sort(v, s);
    }

    for (int &i : v)
    {
        cout << i << " ";
    }

    return 0;
}
