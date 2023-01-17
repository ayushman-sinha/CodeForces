#include <bits/stdc++.h>
using namespace std;
int calc(int n){
    if(n==1)
        return 1;
    else
        return n+calc(n/2);
}
int main(){
    long long t,n;
    cin>>t;
    while(t--){
        cin>>n;
        long long c=0;
        
        cout<<calc(n)<<endl;
    }
}