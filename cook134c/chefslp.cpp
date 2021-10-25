#include <iostream>
using namespace std;
int main(){
        int T;
        cin>>T;
        while(T--){
                long n,l,x;
                cin>>n>>l>>x;
                if(l> n-l){
                        cout<<x*(n-l)<<endl;
                }else cout<<l*x<<endl;
        }
}