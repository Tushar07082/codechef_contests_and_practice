#include <bits/stdc++.h>
using namespace std;
int main(){
        long long t;
        cin>>t;
        while(t--){
                long long n;
                cin>>n;
                vector<long long> v(n);
                for(long long i=0;i<n;i++){
                        cin>>v[i];
                }
                for(long long i=1;i<n;i++){
                        if(i%3==1){
                                v[i]= 2*v[i-1];
                        }else if(i%3==2){
                                if(i<n-1)
                                v[i]= 2*v[i+1];
                                else
                                v[i]= 2*v[i-1];
                        }
                }
                for(long long i=0;i<n;i++){
                        cout<<v[i]<<" ";
                }
                cout<<endl;
        }
}