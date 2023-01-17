#include <bits/stdc++.h>
using namespace std;
bool check(int *a,int n){
    for(int i=1;i<n;i++){
        if(a[i]<a[i-1]){
            return false;
        }
    }
    return true;
}
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        bool f=false;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    f=check(a,n);
                    if(f)
                        break;
                    
                    if(a[i]>a[k])
                        a[i]=a[i]+a[j];
                    else
                        swap(a[j],a[k]);
                    
                    

                }
            }
        }
        if(f){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}