#include <bits/stdc++.h>
using namespace std;
int main(){
        int t;
        cin>>t;
        while(t--){
                int n;
                cin>>n;
                string s;
                cin>>s;
                int num0=0,num1=0;
                for(int i=0;i<n;i++){
                        if(s[i]=='0'){
                                num0++;
                        }else{
                                num1++;
                        }
                }
                string ans = "";
                for(int i=0;i<num0;i++){
                        ans += '0';
                }
                for(int i=0;i<num1;i++){
                        ans += '1';
                }
                cout<<ans<<endl;
        }
}