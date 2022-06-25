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
            int pa,pb,qa,qb;
            cin>>pa>>pb>>qa>>qb;
            int x = max(pa,pb);
            int y = max(qa,qb);
            if(x < y){
                    cout<<"P"<<endl;
            }else if(max(pa,pb) > max(qa,qb)){
                    cout<<"Q"<<endl;
            }else{
                    cout<<"TIE\n";
            }
  
    }

    return 0;
}