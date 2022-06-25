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
            vector<int> a(n);
            int maxi = INT_MIN;
            for(int i=0;i<n;i++){
                    cin>>a[i];
            }
            for(int i=0;i<n;i++){
                    int curr = a[i] + a[(i+n-1)%n];
                    maxi = max(maxi,curr);
            }
            cout<<maxi<<endl;
    }

    return 0;
}