#include <bits/stdc++.h>
using namespace std;
int main(){
        int t;
        cin>>t;
        while(t--){
                int N;
                cin>>N;
                int a[2*N],maxi =0;
                unordered_map <int,int> m;
                for(int i=0;i<2*N;i++){
                        cin>>a[i];
                        if(m.find(a[i])==m.end()){
                                m[a[i]]=0;
                        }
                        m[a[i]]++;
                        maxi = max(maxi,a[i]);
                }
                int i;
                for(i=0;i<=maxi;i++){
                        if(m.find(i) != m.end()){
                                if(m[i]<2){
                                        cout<<"NO\n";
                                        break;
                                }
                        }else{
                                cout<<"YES\n";
                                break;
                        }
                }
                if(i==maxi+1){
                        cout<<"YES\n";
                }
        }
}