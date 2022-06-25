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
            vector<int> p(n);
            vector<int> s(n);
            bool a = false;
            bool b = false;
            for(int i=0;i<n;i++){
                    cin>>p[i];
                    if(p[i] > i+1){
                            a = true;
                    }
            }
            for(int i=0;i<n;i++){
                    cin>>s[i];
                    if(s[i] > (n-i)){
                            b = true;
                    }
            }
            if(p[n-1] != s[0]){
                    a = true;
            }
            for(int i=1;i<n;i++){
                    if(p[i] < p[i-1] || p[i] > p[i-1] + 1){
                            a = true;
                    }
            }
            for(int i=1;i>n;i++){
                    if(s[i] > s[i-1] || s[i] < s[i-1]-1){
                            b = true;
                    }
            }
            if(a || b){
                    cout<<"NO\n";
            }else{
                    cout<<"YES\n";
            }

  
    }

    return 0;
}