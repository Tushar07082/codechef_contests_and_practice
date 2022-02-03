#include <bits/stdc++.h>
using namespace std;
int main(){
        int t;
        cin>>t;
        while(t--){
                int x;
                cin>>x;
                if(x==0){
                        cout<<0<<" "<<1<<" "<<2<<endl;
                        continue;
                }
                if(x==1){
                        cout<<0<<" "<<1<<" "<<3<<endl;
                        continue;
                }
                int a = 1;
                while(a*2 <= x){
                        a = a*2;
                }
                if(a==x){
                        cout<<a<<" "<<a+1<<" "<<a+2<<endl;
                }else if(x%2==1){
                        cout<<x-2<<" "<<x-1<<" "<<x<<endl;
                }else {
                        cout<<x-2<<" "<<x<<" "<<x+1<<endl;
                }
                
        }
}