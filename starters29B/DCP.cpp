#include <bits/stdc++.h>
using namespace std;
#define D 1000000007
int main(){
        long long n,m;
        cin>>n>>m;
        vector<long long> q(n);
        for(long long i=0;i<n;i++){
                cin>>q[i];
        }
        long long c,x;
        for(long long i=0;i<m;i++){
                cin>>c>>x;
                vector<long long> w(x);
                vector<long long> C(x);
                for(long long j=0;j<x;j++){
                        cin>>w[j]>>C[j];
                        q[C[j]-1] += (w[j]*q[c-1])%D;
                        q[C[j]-1] = q[C[j]-1]%D;
                }
                q[c-1] = 0;
        }
        for(long long i=0;i<n;i++){
                cout<<(q[i]%D)<<endl;
        }
}