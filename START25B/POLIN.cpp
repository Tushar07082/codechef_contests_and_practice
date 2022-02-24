#include <bits/stdc++.h>
using namespace std;
int main(){
        int t;
        cin>>t;
        while(t--){
                int N;
                cin>>N;
                unordered_set <int> X;
                unordered_set <int> Y;
                for(int i=0;i<N;i++){
                        int x,y;
                        cin>>x>>y;
                        X.insert(x);
                        Y.insert(y);
                }
                cout<<X.size() + Y.size()<<endl;
        }
}