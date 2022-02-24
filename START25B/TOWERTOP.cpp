#include <bits/stdc++.h>
using namespace std;
bool ispowof2(long long a, long long b){
        return pow(2,b)==a ;
}
int main(){
        int t;
        cin>>t;
        while(t--){
                long long x,m;
                cin>>x>>m;
                if(m==0){
                        cout<<0<<endl;
                        continue;
                }
                if(x==1 && m==1){
                        cout<<1<<endl;
                        continue;
                }
                long long a = 1;
                long long b = log2(x);
                // cout<<"b = "<<b<<endl;
                if(ispowof2(x,b)){
                        // cout<<"Hey\n";
                        b = b+1;
                }else{
                        b = b+2;
                }
                long long ans = m-b+1;
                if(ans<0){
                        cout<<0<<endl;
                        continue;
                }
                cout<<ans<<endl;
        }
}