
#include<bits/stdc++.h>
using namespace std;
int dp[10][83][83][2];
long long digitDP(vector<int>&digit,int n,int tight,long long mod1,int mod2,int k){
    long long x=0LL;
    if(n==-1){
        if(mod1==0&&mod2==0)
            return 1;
        return 0;
    }
    if(dp[n][mod1][mod2][tight]!=-1)
        return dp[n][mod1][mod2][tight];
    int lim=tight?digit[n]:9;
    for(int i=0;i<=lim;i++){
        int newTight=digit[n]==i?tight:0;
        
        x+=digitDP(digit,n-1,newTight,(((mod1*10)%k+i)%k)%k,(mod2+i)%k,k);
    }
    return dp[n][mod1][mod2][tight]=x;
}
int calc(int a,int b,int k){
    vector<int>num1,num2;
    if(a>0)
        a--;
    while(a){
        num1.push_back(a%10);
        a/=10;
    }
    while(b){
        num2.push_back(b%10);
        b/=10;
    }
     memset(dp,-1,sizeof(dp));
    long long ans1=digitDP(num2,num2.size()-1,1,0,0,k);
    memset(dp,-1,sizeof(dp));
    long long ans2=digitDP(num1,num1.size()-1,1,0,0,k);
     
    return ans1-ans2;
}
int main(){
    int t;
    int a,b,k;
    cin>>t;
    int i=1;
   
    while(t--){
        cin>>a>>b>>k;
        if(k<=81)
            cout<<"Case "<<i++<<": "<<calc(a,b,k)<<"\n";
        else
            cout<<"Case "<<i++<<": 0\n";
    }
        
}