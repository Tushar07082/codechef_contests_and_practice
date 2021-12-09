#include <iostream>
using namespace std;
int main(){
        int t;
        cin>>t;
        while(t--){
                long  n,m;
                cin>>n>>m;
                if(m==n) cout<<0<<endl;
                else if(m==0){
                        cout<< n*(n+1)/2;
                }
                else {
                        long x = n-m;
                        long y = m+1;
                        long i=0;
                        // while(i<x){
                        //         i += m;
                        // }
                        i = x/m * m;
                        if(i < x){
                                i = i+m;
                        }
                        // cout<<i<<endl;
                        long z = i/y;
                        // int ans = z*(z+1)/2;
                        // if(x%z==0){
                        //         cout<<y*ans<<endl;
                        //         continue;                        }
                        // ans = ans*(y-1);
                        // ans += (x%z)*(x%z +1)/2;
                        long ans = z*(z+1)/2;
                        ans = ans * (y-1);
                        long a = x - z*(y-1);
                        ans += a*(a+1)/2;
                        
                        cout<<ans<<endl;
                }
        }
}