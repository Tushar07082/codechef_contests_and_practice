#include <iostream>
#include <vector>
using namespace std;


int main(){
        int T;
        cin>>T;
        while(T--){
                long m,n;
                cin>>n>>m;
                vector <long> a[n];
                int vis[n][n] ={0};
                for(int i=0;i<n-1;i++){
                        a[i].push_back(i+1);
                        
                }
                
                if(m==n-1){
                       for(int i=0;i<n-1;i++){
                               cout<<i+1<<" "<<a[i][0]+1<<endl;
                       } 
                }else { 
                        int x=0;
                        
                        
                        for(int j =2;j<n;j++){
                                for(int k=0;k<j-1;k++){
                                      if(x<m-n+1){
                                              a[k].push_back(j);
                                      }  
                                      x++;
                                        
                                }
                        }
                        for(int i=0;i<n;i++){
                                for(auto j : a[i]){
                                        cout<<i+1<<" "<<j+1<<endl;
                                }
                       } 
                       
                }
        }
}