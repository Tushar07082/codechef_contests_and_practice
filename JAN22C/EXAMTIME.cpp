#include <iostream>
using namespace std;
int main(){
        int t;
        cin>>t;
        while(t--){
               int a,b,c,x,y,z;
               cin>>a>>b>>c;
               cin>>x>>y>>z;
               if(a+b+c > x+y+z){
                       cout<<"Dragon\n";
               }else if(x+y+z > a+b+c){
                       cout<<"Sloth\n";
               }else if(a>x){
                       cout<<"Dragon\n";
               }else if(x>a){
                       cout<<"Sloth\n";
               }else if(b>y){
                       cout<<"Dragon\n";
               }else if(y>b){
                       cout<<"Sloth\n";
               }else{
                       cout<<"Tie\n";
               }

        }
}