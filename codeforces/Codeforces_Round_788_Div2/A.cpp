#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, last, negative = 0;
        bool flag = true;
        vector<int> nums;

        cin >> n;
        for (int j = 0; j < n; j++)
        {
            int tmp;
            cin >> tmp;
            nums.push_back(tmp);
            if (tmp < 0)
                negative++;
        }

        last = 1e10;
        for (int j = 0; (j < negative) && flag; j++)
        {
            if (last < abs(nums[j]))
                flag = false;
            last = abs(nums[j]);
        }

        last = -1e10;
        for (int j = negative; (j < nums.size()) && flag; j++)
        {
            if (last > abs(nums[j]))
                flag = false;
            last = abs(nums[j]);
        }
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}