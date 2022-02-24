#include <bits/stdc++.h>
using namespace std;
int main(){
        int t;
        cin>>t;
        while(t--){
                string s;
                cin>>s;
                int n = s.size();
                string k = s;
                int ans = 0;
                reverse(k.begin(),k.end());
                int i=0,j=0;
                while(i<n && j<n){
                        if(s[i]==k[j]){
                                i++;j++;
                        }else{
                                while(i<n && s[i]!=k[j]){
                                        ans++;
                                        i++;
                                }
                        }
                }
                cout<<ans<<endl;
                

        }
}