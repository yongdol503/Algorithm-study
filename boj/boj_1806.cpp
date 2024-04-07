#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, s, sum = 0, ans = 100000;
    cin >> n >> s;

    queue<int> q;
    while (n--)
    {
        int tmp;
        cin >> tmp;
        q.push(tmp);
        sum += tmp;
        while (s <= sum)
        {
            if (q.size() < ans)
            {
                ans = q.size();
            }
            sum -= q.front();
            q.pop();
        }
    }

    cout << (ans == 100000 ? 0 : ans);

    return 0;
}