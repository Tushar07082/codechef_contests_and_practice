#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
        int t;
        cin>>t;
        while(t--){
               int n;
               cin>>n;
               for(int i=0;i<n;i++){
                       char a = 97 + i%26;
                       cout<<a;
               }
               cout<<endl;
        }
}