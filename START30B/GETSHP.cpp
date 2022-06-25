#include <bits/stdc++.h>
using namespace std;
int main(){
        long long t;
        cin>>t;
        while(t--){
                long long n,k;
                cin>>n>>k;
                vector<long long> v(n);
                long long sum = 0;
                long long maxi = INT_MIN;
                for(long long i=0;i<n;i++){
                        cin>>v[i];
                        sum += v[i];
                        maxi = max(maxi,v[i]);
                } 

                if(sum <= k ){
                        cout<<n<<endl;
                }else if(sum-maxi + (maxi+1)/2 <= k){
                        cout<<n<<endl;
                }else{
                        sort(v.begin(),v.end());
                        long long sumi = 0;
                        long long i;
                        for(i=0;i<n;i++){
                                if(sumi+v[i]>k){
                                        break;
                                }
                                sumi += v[i];
                        }
                        if(i!=n && (v[i]+1)/2 + sumi <= k){
                                cout<<i+1<<endl;
                        }else{
                                cout<<i<<endl;
                        }
                }
        }
}