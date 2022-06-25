#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vvi vector<vector<int>>
#define vl vector<long long>
#define vvl vector<vector<long long>>

int main(){
  
    int t; cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        vector<int> v(n);
        int sum1 =0,sum2 =0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            sum1 += v[i];
            if(v[i]>y){
                sum2+= v[i]-y;
            }

        }
        if(sum2+x < sum1){
            cout<<"COUPON\n";
        }else{
            cout<<"NO COUPON\n";
        }

    }

    return 0;
}