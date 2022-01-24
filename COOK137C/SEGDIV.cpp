#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin >> t;
	
	while(t--){
	    int n; cin >>n;
	    
	    long long int a = 10;
	    cout << a << " ";
	    
	    for(int i=2; i<=n; i++){
	        if(i%2 == 0) a += 11;
	        else  a += 9;
	        
	        cout << a <<" ";
	    }
	    
	    cout <<"\n";
	}
	return 0;
}