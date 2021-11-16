#include <iostream>
#include <queue>
#include <map>
using namespace std;
map <int,int> m;
int ans (long a[],long x,long n){
        long result= a[0]+x;
        if(m[a[0]]%2==0){
                        return -1;
        }
        for(long i=1;i< n;i++){
                if(m[a[i]]%2==0){
                        return -1;
                }
                result = result ^ (a[i]+x);
        }
        return result;

}
int main(){
        int T;
        cin>>T;
        while(T--){
                long n;
                cin >> n;
                long a[n];
                
                for(int i=0;i<n;i++){
                        cin>>a[i];
                        if(m.find(a[i])==m.end()){
                                m[a[i]]=1;
                        }else {
                                m[a[i]]+=1;
                        }
                       
                }
                if(m[0]==n){
                        cout<<0<<"\n";
                        continue;
                }
                long x=0;
                long s = ans(a,x,n);
                while(s!=0 && s!=-1){
                        x++;
                        s = ans(a,x,n);
                }
                if(s==-1 ){
                        cout<<-1<<"\n";
                }else cout<<x<<"\n";
                



        }
}