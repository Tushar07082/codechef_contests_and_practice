#include <iostream>
using namespace std;
int main(){
        int t;
        cin>>t;
        while(t--){
                int n;
                cin>>n;
                string s;
                cin>>s;
                int i;
                for (i = 0; i < s.size()-1; i++)
                {       if(s[i]==s[i+1]){
                                cout<<"YES"<<endl;
                                break;
                        }
                        /* code */
                }
                if(i==s.size()-1){
                        cout<<"NO"<<endl;
                }
                

        }
}
