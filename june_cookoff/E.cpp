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
            vector<int>a(n);
            for(int i=0;i<n;i++){
                    cin>>a[i];
            }
            if(n==2){
                    if(a[0]&a[1] ==0){
                            cout<<"NO\n";
                    }else{
                            cout<<"YES\n";
                    }
            }else{
                    
            }
  
    }

    return 0;
}