#include <iostream>
using namespace std;
int main(){
        int T;
        cin>>T;
        while(T--){
                long x,y;
                cin>>x>>y;
                if(y>x){
                        if((y-x)%2){
                                cout<<(y-x)/2 + 2<< endl;
                        }else {
                                cout<<(y-x)/2<<endl;
                        }
                }else{
                        cout<<x-y<<endl;
                }
        }
}