#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
        int t;
        cin>>t;
        while(t--){
               int n;
               cin>>n;
               int a[n],sum = 0;
               for(int i=0;i<n;i++){
                       cin>>a[i];
                       sum += a[i];
               }
               int npow2 = 1;
               while(npow2<sum){
                       npow2 *= 2;
               }
               int req = npow2 - sum;
               int ans = 0;
               int i;
               
               for(i=0;i<n;i++){
                       if(req%a[i]==0){
                               ans = 1;
                               break;
                       }
               }
               if(req == 0){
                       cout<<0<<endl;
               }else if(ans == 1){
                       cout<<ans<<endl;
                       cout<<1<<" "<<req/a[i] +1<<endl;
                       cout<<i<<endl;
               }
        //        cout<<req<<endl;


        }
}