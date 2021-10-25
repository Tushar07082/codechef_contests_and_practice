#include <iostream>
using namespace std;
int main(){
        int T;
        cin>>T;
        while(T--){
                long n,k;
                cin>>n>>k;
                int sum = (n-k)*(n-k-1);
                int points = n*(n-1) - sum ;
                points = points/k;
                if(points%2){
                        cout<<points-1<<endl;
                }else cout<<points<<endl;

        }
}