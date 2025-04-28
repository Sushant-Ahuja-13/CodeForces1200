#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n, x, y;
    cin >> n >> x >> y;
    ll lcm = ((x * y) / __gcd(x, y));
    ll pos = n / x;
    ll neg = n / y;
    ll common = n / lcm;
    pos -= common;
    neg -= common;
    if (neg > pos)
    {
        ll res = neg - pos;
        ll total = n * (n + 1) / 2;
        ll positive = (n - pos) * (n - pos + 1) / 2;
        ll first = total - positive;
        ll second = (-1) * neg * (neg + 1) / 2;
        cout << first + second << endl;
        return;
    }
    else
    {
        ll res = pos - neg;
        ll total = n * (n + 1) / 2;
        ll last = (n - pos) * (n - pos + 1) / 2;
        ll first = total - last;
        ll second = -1 * (neg) * (neg + 1) / 2;
        cout << first + second << endl;
        return;
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