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
        int a = 0;
        int ans = 0;
        n--;
        
        ans = (n)/5;
        ans = ans*2;
        if(n%5 == 4){
            ans += 2;
        }else if(n%5 !=0){
            ans++;
        }
        cout<<ans<<endl;
    }

    return 0;
}