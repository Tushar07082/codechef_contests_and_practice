#include <bits/stdc++.h>
using namespace std;
int main()
{
        int t;
        cin >> t;
        while (t--)
        {
                int n;
                cin >> n;

                string s;
                cin >> s;

                int ans = 0;
                
                for (int i = 0; i < n; i++)
                {
                        if (i < n - 1 && s[i] == s[i + 1])
                        {
                                i++;
                        }
                        ans++;
                }
                cout << ans << endl;
        }
}