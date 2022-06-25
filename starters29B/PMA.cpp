#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<long long>
#define vi vector<int>

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        vll v(n), a(n);
        ll mx = INT_MIN, mn = INT_MAX, sum = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            a[i] = abs(v[i]);
        }
        for (ll i = 0; i < n; i++)
        {
            mn = min(mn, a[i]);
            sum += a[i];
            i++;
        }
        for (ll i = 1; i < n; i++)
        {
            mx = max(mx, a[i]);
            sum -= a[i];
            i++;
        }

        if (mn < mx)
        {
            sum += 2 * mx;
            sum -= 2 * mn;
        }

        cout << sum << endl;
    }

    return 0;
}