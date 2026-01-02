#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    cin >> n >> t;
    vector<pair<int, int>> drynessRates(n);

    for (int i = 0; i < n; i++)
    {
        cin >> drynessRates[i].first;
        drynessRates[i].second = 0;
    }

    int survivalHours = 0;
    while (true)
    {
        for (int i = 0; i < n; i++)
        {
            drynessRates[i].second += drynessRates[i].first;
        }

        sort(drynessRates.begin(), drynessRates.end(),
             [](const pair<int, int> &a, const pair<int, int> &b)
             {
                 return a.second > b.second;
             });

        if (drynessRates[0].second >= t)
        {
            break;
        }
        else
        {
            drynessRates[0].second = 0;
        }

        survivalHours++;
    }

    cout << survivalHours;

    return 0;
}