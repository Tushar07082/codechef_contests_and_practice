#include <iostream>
using namespace std;
int main(){
        int t;
        cin>>t;
        while(t--){
                int x,y;
                cin>>x>>y;
                string s;
                cin>>s;
                int ls =0,m=0,ones=0;
                for (int i = 0; i < s.size(); i++)
                {       if(s[i] == '1'){
                                ones++;
                                m++;
                                ls = max(ls,m);
                                // cout<<ones<<m<<ls<<endl;
                        }else{
                                m=0;
                        }
                        /* code */
                }
                int ans = ones*x + ls*y;
                cout<<ans<<endl;
                
        }
}
