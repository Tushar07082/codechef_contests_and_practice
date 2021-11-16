#include <iostream>
using namespace std;
int main(){
        int T;
        cin>>T;
        while(T--){
                long n;
                cin>>n;
                int a[n];
                int odd =0;
                for(int i=0;i<n;i++){
                        cin>>a[i];
                        if(a[i]%2){
                                odd++;
                        }
                }
                cout<<odd/2<<endl;
        }
}