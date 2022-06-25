#include <bits/stdc++.h>
using namespace std;
int main(){
        long long t;
        cin>>t;
        if(t%2==1)
        cout<<-1<<endl;
        else{
                cout<<t/2<<" "<<0<<endl;
                cout<<-t/2<<" "<<0<<endl;
                cout<<0<<" "<<t/2<<endl;
                cout<<0<<" "<<-t/2<<endl;
        }
}