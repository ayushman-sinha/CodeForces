#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n==3){
            cout<<"-1\n";
            continue;
        }
        if(n%2==0){
            for(int i=n;i>=1;i--){
                cout<<i<<" ";
            }
            cout<<"\n";
            continue;
        }

        int ar[n+1];

        for(int i=1;i<=n;i++)
            ar[i-1]=i;
        
        int a=0,b=n-1,prev=0;
        while(a<=b){
            swap(ar[a],ar[b]);
            prev=a;
            a++;
            b--;
        }
        if(ar[prev]==prev+1){
            int c1=1;
            for(int i=prev;i<n;i++)
                ar[i]=c1++;
            
        }
        else{
            while(prev-1>0){
                swap(ar[prev],ar[prev-1]);
                prev-=2;
            }
        }
        for(int i=0;i<n;i++)
            cout<<ar[i]<<" ";
        cout<<"\n";

    
        
    }
}