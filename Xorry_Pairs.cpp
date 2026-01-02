#include <bits/stdc++.h>
using namespace std;

// O (n)
long long countXorryPairs(long long n)
{
    long long count = 0;
    for (long long a = 0; a <= n / 2; a++)
    {
        long long b = n ^ a;
        if (a + b == n)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        cout << countXorryPairs(n) << "\n";
    }

    return 0;
}
