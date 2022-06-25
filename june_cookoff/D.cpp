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
            ll n;
            cin>>n;
                ll a= n/2;
                ll b = n-a;
                if(n==2){
                        cout<<0<<endl;
                        continue;
                }
                if(n%2==0){
                        if(a%2==0){
                                a--;b++;
                        }else{
                                a-=2;
                                b+=2;
                        }
                }
                ll lcm = a*b;
                cout<<lcm - 1<<endl;
  
    }

    return 0;
}