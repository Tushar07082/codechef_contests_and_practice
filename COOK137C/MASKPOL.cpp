#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
        int t;
        cin>>t;
        while(t--){
               int n,a;
               cin>>n>>a;
               if(n-a < a){
                       cout<<n-a<<endl;
               }else {
                       cout<<a<<endl;
               }
        }
}