#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t,n;
    cin>>t;
    while(t--){
        cin>>n;
        long long c=0;
        for(long long i=1;i<=n;i=i*2){
            c+=n/i;
        }
        cout<<c<<endl;
    }
}