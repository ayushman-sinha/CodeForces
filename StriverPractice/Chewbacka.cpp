#include <bits/stdc++.h>
using namespace std;
long long toNum(vector<int>&a){
    long long ans=0;
    for(int i=0;i<a.size();i++){
        ans=ans*10+a[i];
    }
    return ans;
}

int main(){
    long long int t,n;
    t=1;
    while(t--){
        cin>>n;
        vector<int>ar;
        while(n>0){
            ar.push_back((n%10));
            n/=10;
        }
        
        bool flag=false;
        int prev=0;
        for(int i=0;i<ar.size();i++){
           if(ar[i]>prev&&9-ar[i]<ar[i]){
            if(i==ar.size()-1&&9-ar[i]==0)
                continue;

             ar[i]=9-ar[i];
             prev=ar[i];
           }
        }
        reverse(ar.begin(),ar.end());
        cout<<toNum(ar)<<endl;
        cout<<endl;

    }
}