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
            int x , y;
            cin>>x>>y;
            if(x<y){
                    cout<<y-x<<endl;
            }else{
                    if((x-y)%2){
                            cout<<(x-y+1)/2 + 1<<endl;
                    }else{
                            cout<<(x-y)/2<<endl;
                    }
            }
  
    }

    return 0;
}