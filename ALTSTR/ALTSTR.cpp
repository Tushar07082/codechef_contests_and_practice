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
                int count1=0,count0=0;
                for(int i=0;i<n;i++){
                        if(s[i]=='0'){
                                count0++;
                        }else{
                                count1++;
                        }
                }
                if(abs(count0-count1)<=1){
                        cout<<count0+count1<<endl;
                }else{
                        cout<<2*min(count0,count1)+1<<endl;
                }
        }
}