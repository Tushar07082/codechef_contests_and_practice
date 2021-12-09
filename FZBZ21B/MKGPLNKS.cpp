#include <iostream>
#include <string>

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
                int l = 0, b = 0, w = 0;
                int ans = 0;
                int x = 0;
                if(s[0]=='B'){
                        b++;
                }else{
                        w++;
                }
                for (int i = 1; i < n; i++)
                {
                        if(s[i]!=s[i-1]){
                                if(s[i]=='B'){
                                        b++;
                                }else w++;
                        }
                }

                if(b<w) cout<<b<<endl;
                else cout<<w<<endl;
        }
}