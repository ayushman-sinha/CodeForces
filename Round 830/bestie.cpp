#include <bits/stdc++.h>
using namespace std;
bool check(int *a,int n){
    int gcd=a[0];
    for(int i=1;i<n;i++){
        gcd=__gcd(gcd,a[i]);
    }
    return gcd==1;
}
int calc(int *a,int i,int n){
  if(i==n){
    return 0;
  }
  a[i]=__gcd(a[i],i);
 int x=calc(a,i+1,n);
 return min(l)
  
    return ans;
}
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int ans=calc(a,0,n);
        
        
    }
    return 0;
}