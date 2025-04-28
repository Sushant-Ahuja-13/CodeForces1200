#include <bits/stdc++.h>
#define INT long long
using namespace std;
void solve()
{
    INT n;
    cin >> n;
    vector<INT> a(n);
    for (auto &x : a)
        cin >> x;
    INT k = 1;
    while (true)
    {
        for (INT i = 0; i < n; i++)
        {
            if (a[i] % k != a[0] % k)
            {
                cout << k << endl;
                return;
            }
        }
        k *= 2;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}