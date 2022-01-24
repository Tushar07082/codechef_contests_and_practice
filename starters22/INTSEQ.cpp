#include <iostream>
using namespace std;
int main(){
        int t;
        cin>>t;
        while(t--){
                int k;
                cin>>k;
                int n =1,x=0;
                while(k>0){
                        if(k%2 == 1){
                            break;    
                        }
                        x++;
                        k = k/2;
                        
                }
                cout<<x<<endl;
                
        }
}