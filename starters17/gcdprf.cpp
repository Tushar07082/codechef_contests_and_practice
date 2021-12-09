#include <iostream>
using namespace std;
int main(){
        int t;
        cin>>t;
        while(t--){
                int n;
                cin>>n;
                int b[n];
                for(int i=0;i<n;i++){
                        cin>>b[i];
                }
                int a[n];
                a[0]=b[0];
                int i;
                for(i =1;i<n;i++){
                        if(b[i-1]%b[i]!=0){
                                cout<<-1<<endl;
                                break;
                        }
                        else a[i]=b[i];
                }
                if(i==n){
                        for(i =0;i<n;i++){
                        cout<<a[i]<<" ";
                }
                cout<<"\n";

                }
        }
}