#include <bits/stdc++.h>
using namespace std;

bool canReachTargetWeight(const vector<int> &weights, int w)
{
    int n = weights.size();
    int left = 0, right = 0;
    int currentSum = 0;

    while (right < n)
    {
        currentSum += weights[right];
        right++;

        while (currentSum > w && left < right)
        {
            currentSum -= weights[left];
            left++;
        }

        if (currentSum > 0 && w % currentSum == 0)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, w;
    cin >> n >> w;
    vector<int> weights(n);
    for (int i = 0; i < n; i++)
    {
        cin >> weights[i];
    }
    if (canReachTargetWeight(weights, w))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}