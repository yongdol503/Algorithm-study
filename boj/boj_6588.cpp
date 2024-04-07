#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<bool> isPrime(1000001, true);
    for (int i = 2; i * i < 1000001; i++)
    {
        if (!isPrime[i])
        {
            continue;
        }

        for (int j = i + i; j < 1000001; j += i)
        {
            isPrime[j] = false;
        }
    }

    int n;
    while (true)
    {
        cin >> n;
        if (n == 0)
        {
            break;
        }

        for (int i = 3; i < n; i++)
        {
            if (isPrime[i] && isPrime[n - i])
            {
                cout << n << " = " << i << " + " << n - i << "\n";
                break;
            }
        }
    }

    return 0;
}
