#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long pow_table[10][32] = {0};
    for (int i = 1; i < 10; i++)
    {
        pow_table[i][1] = i;
        for (int j = 2; j < 32; j++)
        {
            pow_table[i][j] = pow_table[i][j - 1] * i;
        }
    }

    int t;
    cin >> t;

    while (t--)
    {
        int n, cnt = 0;
        cin >> n;

        vector<int> digits;
        while (n)
        {
            digits.push_back(n % 10);
            n /= 10;
        }
        reverse(digits.begin(), digits.end());

        unordered_map<long long, bool> m;
        vector<int> pos(digits.size(), 0);
        for (int i = 0; i < digits.size(); i++)
        {
            pos[i] = 1;
            do
            {
                long long sum = 0, tmp = 0;
                for (int j = 0; j < pos.size(); j++)
                {
                    tmp = tmp * 10 + digits[j];
                    if (pos[j])
                    {
                        sum += tmp;
                        tmp = 0;
                    }
                }

                if (tmp)
                {
                    sum += tmp;
                }
                m[sum] = 1;

            } while (prev_permutation(pos.begin(), pos.end()));
        }

        for (int i = 1; i < 32; i++)
        {
            long long sum = 0;
            for (long long digit : digits)
            {
                sum += pow_table[digit][i];
            }
            if (m[sum])
            {
                cnt++;
            }
        }

        cout << (cnt == 31 ? "Hello, BOJ 2023!" : to_string(cnt)) << "\n";
    }

    return 0;
}