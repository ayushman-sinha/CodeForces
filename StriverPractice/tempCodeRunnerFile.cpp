#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        bool flag = false;
        for(int i=2;i<=y;i++){
            if(x*i<=y){
                cout<<x<<x*i<<endl;
                flag = true;
                break;
            }
        }
        if(!flag){
            cout<<"-1 -1"<<endl;
        }
    }
}