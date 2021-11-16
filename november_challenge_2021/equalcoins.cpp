#include <iostream>
using namespace std;
int main(){
        int T;
        cin>>T;
        while(T--){
                long x,y;
                cin>>x>>y;
                if(x%2 || (x==0 && y%2==1)){
                        cout<<"NO\n";
                }else cout<<"YES\n";
        }
}