#include <bits/stdc++.h>
using namespace std;
int main(){
        int t;
        cin>>t;
        while(t--){
                int n;
                cin>>n;
                vector<int> a(n);
                int maxi = 0;
                for(int i=0;i<n;i++){
                        cin>>a[i];
                        maxi = max(a[i],maxi);
                }
                unordered_set <int> st(a.begin(),a.end());
                if(st.size() != a.size()){
                        cout<<"NO\n";
                }else{
                        int i;
                        for(i=n+1;i<maxi;i++){
                                vector<int> v = a;
                                for(int j=0;j<n;j++){
                                        v[j] = v[j]%i;
                                }
                                unordered_set <int> vt(v.begin(),v.end());
                                if(vt.size()==v.size()){
                                        cout<<"YES "<<i<<endl;
                                        break;
                                }
                        }
                        if(i==maxi){
                                cout<<"NO\n";
                        }

                }
        }
}