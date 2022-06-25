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
            int l,r;
            cin>>l>>r;
            if(r-l <= 3){
                    int x = l^(l+1)^(l+2)^(l+3);
                    if(x==0){
                            cout<<l<<" "<<l+1<<" "<<l+2<<" "<<l+3<<endl;
                    }else{
                            cout<<-1<<endl;
                    }
            }else{
                    int x = ((l+1)&(-(l+1)));
                    if(x<=l+1){
                            cout<<l+1<<" "<<l+2<<" "<<l+3<<" "<<l+4<<endl;
                    }else{
                            cout<<l<<" "<<l+1<<" "<<l+2<<" "<<l+3<<endl;
                    }
            }
  
    }

    return 0;
}