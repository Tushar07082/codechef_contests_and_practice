#include <iostream>
using namespace std;
int main(){
        int t;
        cin>>t;
        while(t--){
                int a,b,c;
                cin>>a>>b>>c;
                int sum = a+b+c;
                sum = sum/2;
                if( a> sum){
                        cout<<"A\n";
                }
                else if( b> sum){
                        cout<<"B\n";
                }
                else if( c> sum){
                        cout<<"C\n";
                }
                else {
                        cout<<"NOTA\n";
                }
        }
}