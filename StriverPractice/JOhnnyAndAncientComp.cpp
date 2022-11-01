#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int t,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        long c=0l;
        if(b==a){
            cout<<"0\n";
            continue;
        }
        if(b<a){
            swap(a,b);
        }
        while(a*8<=b){
            a*=8;
            c++;
        }
        while(a*4<=b){
            a*=4;
            c++;
        }
        while(a*2<=b){
            a*=2;
            c++;
        }
        if(a==b){
            cout<<c<<"\n";
            continue;
        }
        else{
            cout<<"-1\n";
            continue;
        }
    }
}