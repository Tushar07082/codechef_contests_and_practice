#include <iostream>
#include <queue>
#include <map>
using namespace std;
int main(){
        int T;
        cin>>T;
        while(T--){
                long n;
                cin >> n;
                long a[n],maxi=0;
                map <long,long> p;
                priority_queue <long> q1;
                bool flag = 1;
                priority_queue <long ,vector <long>, greater<long>> q2;
                for(int i=0;i<n;i++){
                        cin>>a[i];
                        maxi = max(maxi,a[i]);
                        if(p.find(a[i]) == p.end()){
                                q1.push(a[i]);
                                p[a[i]]=1;
                        }else if(p[a[i]]==2){
                                flag = 0;
                        }else{
                                p[a[i]] += 1;
                                q2.push(a[i]);
                        }
                }
                if(flag == 0 || p[maxi]==2){
                        cout<<-1;
                }else {
                        while(!q2.empty()){
                                cout<<q2.top()<<" ";
                                q2.pop();
                        }
                        while(!q1.empty()){
                                cout<<q1.top()<<" ";
                                q1.pop();
                        }
                }
                cout<<"\n";


        }
}