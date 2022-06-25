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
            ll n,k;
            cin>>n>>k;
            ll a = 2;
                if(k==1){
                        if(n%a==1){
                                cout<<"ODD\n";
                        }else{
                                cout<<"EVEN\n";
                        }
                }else if(k==2){
                        cout<<"ODD\n";
                }else{
                        cout<<"EVEN\n";
                }
  
    }

    return 0;
}