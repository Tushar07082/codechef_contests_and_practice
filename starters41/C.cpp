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
            int n,k;
            cin>>n>>k;
            if(n%2==0){
                    cout<<"YES\n";
            }else if(n%2==1 && k==1){
                    cout<<"YES\n";
            }else{
                    cout<<"NO\n";
            }
  
    }

    return 0;
}