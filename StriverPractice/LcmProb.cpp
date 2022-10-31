#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        long long int x,y;
        cin>>x>>y;
        bool flag = false;
        for(long long int i=2;i<=y;i++){
            if(x*i<=y){
                cout<<x<<" "<<x*i<<endl;
                flag = true;
                break;
            }
            else break;
        }
        if(!flag){
            cout<<"-1 -1"<<endl;
            //dijkstra algorithm
            
        }
    }
}