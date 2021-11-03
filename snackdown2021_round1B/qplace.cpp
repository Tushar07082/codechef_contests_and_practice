#include <iostream>
using namespace std;
int main(){
        int T;
        cin>>T;
        while(T--){
                long n;
                cin>>n;

                if(n%2){
                        for(int i=0;i<n;i++){
                                for(int j=0;j<n;j++){
                                        if(i==j && i>=1 && i<n-1){
                                                cout<<"Q";
                                        }else cout<<".";
                                }
                                cout<<"\n";
                        }
                }else{
                        for(int i=0;i<n;i++){
                                for(int j=0;j<n;j++){
                                        if(i==j && i>=1 && i!=2){
                                                cout<<"Q";
                                        }else cout<<".";
                                }
                                cout<<"\n";
                        }

                }

        }
}


