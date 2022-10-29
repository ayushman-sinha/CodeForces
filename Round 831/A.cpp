#include <bits/stdc++.h>
using namespace std;
int s[300005];
 vector<int>primes;
void sieve(){
    long long int n=300000;
    for(long long int i=2;i<=n;i++){
        if(s[i]==0){
            for(long long int j=i*i;j<=n;j+=i){
                s[j]=1;
            }
        }
    }
}
int binarySearch(int x){
    int a=0,b=primes.size()-1;
    while(a<=b){
        int mid=(a+b)/2;
        if(primes[mid]==x){
            return 1;
        }
        else if(primes[mid]>x){
            b=mid-1;
        }
        else{
            a=mid+1;
        }
    }
    return -1;
}
int calc(int n){
    int ans=0;
    for(int i=0;i<primes.size();i++){
        if(primes[i]!=n&&binarySearch(primes[i]+n)==-1)
            return primes[i];
    }
    return 0;

}
int main(){
    int t,n;
    cin>>t;
    //Sieve of Eratosthenes
    memset(s,0,sizeof(s));
    sieve();    
   
    for(int i=2;i<300000;i++){
        if(s[i]==0){
            primes.push_back(i); 
            //cout<<i<<" ";           
        }
    }
    while(t--){
        cin>>n;        
        int ans=calc(n);
        cout<<ans<<endl;
    }
    return 0;
}