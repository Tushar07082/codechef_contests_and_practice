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

        vll v(n);
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }

        ll curr = 0;
        ll prev = 0;
        for (ll i = 0; curr < (sum + 1) / 2; i++)
        {
            prev = curr;
            curr += v[i];
        }

        prev = max(prev, sum - prev);
        curr = max(curr, sum - curr);

        cout << min(curr, prev) << endl;
    }

    return 0;
}