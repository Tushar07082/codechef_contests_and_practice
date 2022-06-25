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
            int n;
            cin>>n;
            vector<int> v(n);
            bool a = true;
            for(int i=0;i<n;i++){
                    cin>>v[i];
                    if(i>0 && v[i] <v[i-1]){
                            a = false;
                    }
            }
            if(a){
                    cout<<"YES\n";
            }else{
                    cout<<"NO\n";
            }
    }

    return 0;
}