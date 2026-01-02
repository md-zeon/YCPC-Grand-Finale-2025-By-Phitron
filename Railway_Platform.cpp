#include <bits/stdc++.h>
using namespace std;

int totalPossible(const vector<int> &a, int n)
{
    int total = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] >= a[j])
            {
                total++;
            }
        }
    }

    return total;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        cout << totalPossible(a, n) << "\n";
    }

    return 0;
}