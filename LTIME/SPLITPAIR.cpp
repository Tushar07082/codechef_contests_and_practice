#include <bits/stdc++.h>
using namespace std;
int main(){
        long long t;
        cin>>t;
        while(t--){
                long long x;
                cin>>x;
                string n = to_string(x);
                long long counto = 0, counte =0;
                for(long long i=0;i<n.size();i++){
                        if((n[i]-'0')%2==0){
                                counte++;
                        }else{
                                counto++;
                        }
                }
                if(counte>=2){
                        cout<<"YES\n";
                }else if(counto>=2){
                        cout<<"YES\n";
                }else{
                        cout<<"NO\n";
                }
        }
}