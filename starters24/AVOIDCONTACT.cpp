#include <bits/stdc++.h>
using namespace std;
int main(){
        int t;
        cin>>t;
        while(t--){
                int x,y;
                cin>>x>>y;
                if(y==0){
                        cout<<x<<endl;
                        continue;
                }else if(x == y){
                        cout<<2*y - 1<<endl;
                        continue;
                }else{
                        cout<<x+y<<endl;
                }
        }
}