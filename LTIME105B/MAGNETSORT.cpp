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
        vll a(n);
        vector<char> c(n);

        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            a[i] = v[i];
        }

        for (ll i = 0; i < n; i++)
        {
            cin >> c[i];
        }

        bool dir = false;
        for (ll i = 1; i < n; i++)
        {
            if (c[i - 1] != c[i])
                dir = true;
        }

        sort(a.begin(), a.end());

        bool flag = true;
        ll first = 0;
        ll last = 0;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] != v[i])
            {
                first = i;
                flag = false;
                break;
            }
        }

        for (ll i = first + 1; i < n; i++)
        {
            if (a[i] != v[i])
            {
                last = i;
            }
        }

        if (flag == true)
            cout << 0;

        else
        {
            if (dir == false)
                cout << -1;

            else
            {
                bool f = false;
                bool l = false;

                for (ll i = 1; i <= first; i++)
                {
                    if (c[i - 1] != c[i])
                        f = true;
                }

                for (ll i = last + 1; i < n; i++)
                {
                    if (c[i - 1] != c[i])
                        l = true;
                }

                if ((f == false) && (l == false) && (c[last] == c[first]))
                    cout << 2;

                else
                    cout << 1;
            }
        }

        cout << endl;
    }

    return 0;
}