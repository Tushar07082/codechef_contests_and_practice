#include <bits/stdc++.h>
using namespace std;
long C(long long a, long long b){
        if(a<=b){
                return 1;
        }
        return (a*(a-1)/2);
}
int main(){
        int t;
        cin>>t;
        while(t--){
                long n,k;
                cin>>n>>k;
                vector<long> ans;
                if(k==n){
                        for(int i=0;i<n;i++){
                                cout<<1<<" ";
                        }cout<<endl;
                        continue;
                }else{
                        long x = C(n+1,2);
                        
                        for(int i=0;i<n;i++){
                                ans.push_back(i+1);
                        } 
                        long rem = x-k;
                        long y = n-1;
                        while(rem>y){
                                ans[n-1-y+1] = 1;
                                rem -= y;
                                y--;
                        }
                        if(rem != 0){
                                ans[n-rem] = 1;
                        }
                }
                for(int i=0;i<n;i++){
                        cout<<ans[i]<<" ";
                }cout<<endl;
        }
}