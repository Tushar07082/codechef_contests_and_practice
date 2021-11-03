#include <iostream>
#include <cmath>
#include <queue>
#include <algorithm>
#include <set>
using namespace std;
int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int T;
        cin>>T;
        while(T--){
                long k;
                cin>>k;
                
                // int ans = 1;
                // while(k>ans){
                //         k -= ans;
                //         ans++;
                // }
                // ans *= 2;
                
                long D = 1l + 8l*k;
                double sqrtD  = sqrt(D);
                long ans = ((sqrtD - 1)/2.0);
                // cout <<(ans)*(ans+1)/2<<" ";
                while((ans)*(ans+1)/2 < k ){
                        ans++;
                }
                ans *= 2;
                
                cout<<ans<<"\n";
                
                
                


        }
}


