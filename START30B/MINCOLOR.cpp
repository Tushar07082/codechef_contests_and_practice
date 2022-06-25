#include <bits/stdc++.h>
using namespace std;

int main()
{
        long long t;
        cin >> t;
        while (t--)
        {
                long long n, m;
                cin >> n >> m;
                int x1, y1, x2, y2;
                cin >> x1 >> y1 >> x2 >> y2;
                vector<vector<int>> a(n, vector<int>(m));
                if ((x1 + y1) % 2 == 0)
                {
                        for (int i = 0; i < n; i++)
                        {
                                for (int j = 0; j < m; j++)
                                {
                                        if ((i + 1 + j + 1) % 2 == 0)
                                        {
                                                a[i][j] = 1;
                                        }
                                        else
                                        {
                                                a[i][j] = 2;
                                        }
                                }
                                // cout << endl;
                        }
                }
                else
                {
                        for (int i = 0; i < n; i++)
                        {
                                for (int j = 0; j < m; j++)
                                {
                                        if ((i + 1 + j + 1) % 2 == 1)
                                        {
                                                a[i][j] = 1;
                                        }
                                        else
                                        {
                                                a[i][j] = 2;
                                        }
                                }
                                // cout << endl;
                        }
                }
                a[x2 - 1][y2 - 1] = 2;
                for (int i = 0; i < n; i++)
                {
                        for (int j = 0; j < m; j++)
                        {
                                if (i == x2 - 1 && j == y2 - 1)
                                {
                                        cout << a[i][j] << " ";
                                        continue;
                                }
                                if (i < n - 1 && a[i + 1][j] == a[i][j])
                                {
                                        a[i][j] = 3;
                                }
                                if (j < m - 1 && a[i][j + 1] == a[i][j])
                                {
                                        a[i][j] = 3;
                                }
                                if (i > 0 && a[i - 1][j] == a[i][j])
                                {
                                        a[i][j] = 3;
                                }
                                if (j > 0 && a[i][j - 1] == a[i][j])
                                {
                                        a[i][j] = 3;
                                }
                                cout << a[i][j] << " ";
                        }
                        cout << endl;
                }
        }
}      