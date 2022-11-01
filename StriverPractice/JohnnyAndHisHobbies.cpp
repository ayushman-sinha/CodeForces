#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        unordered_set<int>ds;
        for(int i=0;i<n;i++){
            cin>>a[i];
            ds.insert(a[i]);
        }
        bool f=false;
        for(int k=1;k<=1024;k++){
            unordered_set<int>ds1;
            for(int i=0;i<n;i++){
                ds1.insert(a[i]^k);
            }
            if(ds==ds1){
                cout<<k<<endl;
                f=true;
                break;
            }
        }
        if(!f)
            cout<<"-1\n";
    }
}