#include <iostream>
using namespace std;
int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int T;
        cin>>T;
        while(T--){
                long n;
                cin>>n;
                if(n==1 || n==2){
                        cout<<1<<"\n";
                        continue;
                }
                long long ans = 1;
                n = n-2;
                ans += n*(4+(n-1)*2)/2; 
                cout<<ans<<"\n";
        }
}