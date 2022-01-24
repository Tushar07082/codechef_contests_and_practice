#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
        int t;
        cin>>t;
        while(t--){
               int x,y,z;
               cin>>x>>y>>z;
               if(y<=x){
                       cout<<"PIZZA\n";
               }else if(z<=x){
                       cout<<"BURGER\n";
               }else{
                       cout<<"NOTHING\n";
               }

        }
}