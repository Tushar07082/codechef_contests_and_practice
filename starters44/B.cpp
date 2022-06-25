#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vvi vector<vector<int>>
#define vl vector<long long>
#define vvl vector<vector<long long>>

int main(){
  
    int t; cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        stack<char> st;
        int count=0;
        for(int i=0;i<n;i++){
                if(st.empty()){
                        count++;
                }
                if(s[i]=='('){
                        st.push('(');
                }else{
                        st.pop();
                }
        }
        
    }

    return 0;
}