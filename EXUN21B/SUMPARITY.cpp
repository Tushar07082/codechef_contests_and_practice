#include <iostream>
using namespace std;
int main(){
        int t;
        cin>>t;
        while(t--){
                int n,a;
                cin>>n>>a;
                if(n==1){
                        if(a%2==0){
                                cout<<"EVEN\n";
                        }else cout<<"ODD\n";
                }else if(n==2){
                        if(a%2==0){
                                cout<<"ODD\n";
                        }else cout<<"EVEN\n";
                }
                else if(a%2==1){
                        if(n%2==0){
                                cout<<"EVEN\n";
                        }else{
                                cout<<"ODD\n";
                        }
                }else{
                        cout<<"IMPOSSIBLE\n";
                }
                
        }
}