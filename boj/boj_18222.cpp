#include "bits/stdc++.h"

using namespace std;

long long solve(long long n)
{
    if (n == 1)
    {
        return 0;
    }
    long long i;
    for (i = 1; i + i < n; i <<= 1)
    {
    }
    return 1 - solve(n - i);
}

int main()
{
    long long n;
    cin >> n;
    cout << solve(n);
    return 0;
}


