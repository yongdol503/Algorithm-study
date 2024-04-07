#include <bits/stdc++.h>

using namespace std;

// int main()
// {
//     ios::sync_with_stdio(0);
//     cin.tie(0);

//     int n, k, tmp, ans = 1000001, cnt = 0, l = 0, r = 0;
//     cin >> n >> k;

//     vector<int> v(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }

//     while (r < n)
//     {
//         if (v[r++] == 1)
//         {
//             cnt++;
//         }

//         if (cnt != k)
//         {
//             continue;
//         }

//         while (v[l] != 1)
//         {
//             l++;
//         }

//         if (r - l < ans)
//         {
//             ans = r - l;
//         }

//         cnt--;
//         l++;
//     }

//     cout << (ans == 1000001 ? -1 : ans) << "\n";

//     return 0;
// }

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k, tmp, ans = 1000001, cnt = 0, len = 0;
    cin >> n >> k;

    queue<int> q;
    while (n--)
    {
        cin >> tmp;
        q.push(tmp);
        len++;

        if (tmp == 2)
        {
            continue;
        }

        cnt++;
        if (cnt == k)
        {
            while (q.front() != 1)
            {
                len--;
                q.pop();
            }

            if (len < ans)
            {
                ans = len;
            }

            len--;
            cnt--;
            q.pop();
        }
    }

    cout << (ans == 1000001 ? -1 : ans) << "\n";

    return 0;
}
