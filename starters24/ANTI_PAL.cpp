#include <bits/stdc++.h>
#include <iterator>
using namespace std;
int main(){
        int t;
        cin>>t;
        while(t--){
                int n;
                cin>>n;
                string s;
                cin>>s;
                if(n%2 ==1){
                        cout<<"NO\n";
                        continue;
                }
                int m[26] = {0};
                int i;
                for(i=0;i<n;i++){
                        m[s[i]-'a']++;
                        if(m[s[i]-'a']> n/2){
                                cout<<"NO\n";
                                break;
                        }
                }
                if(i!=n){
                        continue;
                }
                string ans = "";
                int j =0;
                int x = 25;
                for(i=0;i<26;i++){
                        while(m[i]--){
                                ans += i +'a';
                                // cout<<i<<endl;
                                j++;
                                if(j>=n/2){
                                        break;
                                }
                        }
                        if(j>=n/2){
                                break;
                        }
                }
                for(int k=25;k>=i;k--){
                        while(m[k]--){
                                ans += k + 'a';
                                j--;
                                if(j<=0){
                                        break;
                                }
                        }
                        if(j<=0){
                                break;
                        }
                }
                cout<<"YES\n";
                cout<<ans<<endl;
        }
}