#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,n,m;
    cin>>t;
    while(t--){
       cin>>n>>m;
       vector<long long> a(n),b(m);
       long long sum=0;
      for(int i=0;i<n;i++) cin>>a[i];
      for(int i=0;i<m;i++) cin>>b[i];
      for(auto i:b)
        sum+=i;
      for(int i=n-1;i>=n-m;i--)
        sum+=a[i];
      cout<<sum<<"\n";

    }
}