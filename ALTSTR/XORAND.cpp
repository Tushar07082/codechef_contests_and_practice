#include <bits/stdc++.h>
using namespace std;

int main(){
        long long t;
        cin>>t;
        while(t--){
                long long n;
                cin>>n;
                vector<long long> a(n);
                for(long long i=0;i<n;i++){
                        cin>>a[i];
                }
                long long ans = 0;
                map <long long,long long> mp;
                for(long long i=0;i<n;i++){
                        
                        mp[(long long)(log2(a[i]))]++;
                }
                for(auto i:mp){
                        ans += ((i.second)*(i.second-1))/2;
                }
                cout<<ans<<endl;
        }
}