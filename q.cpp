#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n), c(n);
    for (auto &x : a)
        cin >> x;
    for (auto &x : b)
        cin >> x;
    for (auto &x : c)
        cin >> x;

    vector<vector<int>> dp(n + 1, vector<int>(8, -INF));
    dp[0][0] = 0;

    for (int i = 0; i < n; i++)
    {
        for (int mask = 0; mask < 8; mask++)
        {
            if (dp[i][mask] == -INF)
                continue;

            dp[i + 1][mask] = max(dp[i + 1][mask], dp[i][mask]);

            if ((mask & 1) == 0)
                dp[i + 1][mask | 1] = max(dp[i + 1][mask | 1], dp[i][mask] + a[i]);
            if ((mask & 2) == 0)
                dp[i + 1][mask | 2] = max(dp[i + 1][mask | 2], dp[i][mask] + b[i]);
            if ((mask & 4) == 0)
                dp[i + 1][mask | 4] = max(dp[i + 1][mask | 4], dp[i][mask] + c[i]);
        }
    }

    cout << dp[n][7] << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}