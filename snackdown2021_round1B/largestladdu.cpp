#include <iostream>
#include <math.h>
#include <queue>
#include <algorithm>
#include <set>
using namespace std;
int main(){
        int T;
        cin>>T;
        while(T--){
                long n;
                cin>>n;
                long size = long(pow(2,n));
                vector <long> a(size);
                int x,y;
                set <int> p;
                for(int i=0;i<size;i++){
                        cin>>a[i];
                        p.insert(a[i]);
                        
                }
                if(p.size()==2){
                        set<int, greater<int> >::iterator itr;
                        set<int, greater<int> >::iterator vpr;
                        vpr = p.begin();
                        itr = p.begin();
                        itr ++;
                        if(*vpr - *itr == 1 || *itr - *vpr == 1){
                                cout<<"YES\n";
                        }
                        else cout<<"NO\n";
                }
                else if(p.size()==1){
                        cout<<"YES\n";
                }
                else {
                        cout<<"NO\n";
                }
                
                


        }
}


