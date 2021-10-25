#include <iostream>
using namespace std;
int main(){
        int T;
        cin>>T;
        while(T--){
                long x,k;
                cin>>x>>k;
                cout<<2*x<<" "<<(x*k)*((x*k)-1)<<endl;

        }
}