#include <iostream>
using namespace std;
int main(){
        int T;
        cin>>T;
        while(T--){
                long n;
                cin>>n;
                string s;
                cin>>s;
                int block = 1;
                int k =s[0];
                
                for(int i=1;i<n;i++){
                        if(s[i]!=k){
                                k = s[i];
                                block++;
                        }

                }
                if(block%3==2){
                        cout<<"RAMADHIR\n";
                }else cout<<"SAHID\n";
        }
}