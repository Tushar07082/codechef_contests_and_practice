#include <iostream>
using namespace std;
int main(){
        int T;
        cin>>T;
        while(T--){
                long n;
                cin>>n;
                int a[n];
                for(int i=0;i<n;i++){
                        cin>>a[i];
                }
                cout<<(a[0]&a[1])<<" ";
                for(int i=1;i<n-1;i++){
                        if((a[i]&a[i-1]) > (a[i]&a[i+1])){
                                cout<<(a[i]&a[i-1])<<" ";
                        }
                        else cout<<(a[i]&a[i+1])<<" ";

                }
                cout<<(a[n-1]&a[n-2])<<endl;
        }
}