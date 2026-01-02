#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin >> n >> q;

    vector<int> mountainHeights(n);
    for (int i = 0; i < n; i++)
    {
        cin >> mountainHeights[i];
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;

        int maxHeight = -1;
        int maxIndex = -1;
        bool isUnique = true;

        for (int i = l; i <= r; i++)
        {
            if (mountainHeights[i] > maxHeight)
            {
                maxHeight = mountainHeights[i];
                maxIndex = i;
                isUnique = true;
            }
            else if (mountainHeights[i] == maxHeight)
            {
                isUnique = false;
            }
        }

        if (!isUnique)
        {
            cout << "NO\n";
            continue;
        }

        bool isSilentPeak = true;

        for (int i = l + 1; i <= maxIndex; i++)
        {
            if (mountainHeights[i] < mountainHeights[i - 1])
            {
                isSilentPeak = false;
                break;
            }
        }

        if (isSilentPeak)
        {
            for (int i = maxIndex + 1; i <= r; i++)
            {
                if (mountainHeights[i] > mountainHeights[i - 1])
                {
                    isSilentPeak = false;
                    break;
                }
            }
        }

        if (isSilentPeak)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}