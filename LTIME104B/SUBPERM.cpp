#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin >> t;
	
	while(t--){
	    int n,k; cin >>n>>k;
	    if(k==1 && n==1){
                    cout<<1<<endl;
            }else if(k==1){
                    cout<<"-1"<<endl;
            }else if(k>n){
                    cout<<-1<<endl;
            }else if(k==n){
                    for(int i=1;i<=n;i++){
                            cout<<i<<" ";
                    }
                    cout<<endl;
            }else{
                    for(int i=1;i<k;i++){
                            cout<<i<<" ";
                    }
                    cout<<n<<" ";
                    for(int i=k;i<n;i++){
                            cout<<i<<" ";
                    }
                    cout<<endl;
            }
	}
	return 0;
}