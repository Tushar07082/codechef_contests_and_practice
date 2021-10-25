#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
        int T;
        cin>>T;
        while(T--){
                long n;
                cin>>n;
                vector <int> a,b;
                for(int i=0;i<n;i++){
                        int x;
                        cin>>x;
                        if(i%2==0){
                                a.push_back(x);
                        }else b.push_back(x);
                }
                sort(a.begin(),a.end(),greater <int> ());
                sort(b.begin(),b.end());
                int ans = 0;
                int x =0,y=0;
                for(int i=0;i<n;i++){
                        if(i%2==0){
                                cout<<a[x]<<" ";
                               
                                for(int j=x;j<n/2;j++){
                                ans += a[x]*b[j];
                        }
                                 x++;
                        }else{ 
                                cout<<b[y]<<" ";
                                y++;
                                }
                        
                }
                cout<<endl<<ans<<endl;
        }
}