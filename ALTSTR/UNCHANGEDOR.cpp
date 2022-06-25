#include <bits/stdc++.h>
using namespace std;
int main(){
        int t;
        cin>>t;
        while(t--){
                int n;
                cin>>n;
                long long a = 4;
                long long b = 3;
                long long ans = 1;
                if(n==2){
                        cout<<0<<endl;
                        continue;
                }
                
                while(b+a <= n){
                        ans += b;
                        b = b+a;
                        a = a*2;
                }
                
                if(n==b+1){
                        cout<<ans<<endl;
                }else{
                        if(n==b){
                                cout<<ans<<endl;
                        }else{
                                b++;
                                cout<<ans+(n-b)<<endl;
                        }
                        
                }
                
        }
}