#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
        int t;
        cin>>t;
        while(t--){
               int n,x;
               cin>>n>>x;
               vector<int>a(n);
               for(int i=0;i<n;i++){
                       cin>>a[i];
               }
               sort(a.begin(),a.end());
               int i=0;
               while(x>0 && i<n){
                       x-=a[n-1-i];
                       i++;
                       
               }
               if(i==n && x>0){
                       cout<<-1<<endl;
               }else cout<<i<<endl;
        }
}