#include <bits/stdc++.h>
using namespace std;
string calc(string &a,string &b){
    int x1=0,x2=0;
    for(int i=0;i<a.size();i++){
        if(a[i]=='X')
            x1++;
        else
            break;
    }
    for(int i=0;i<b.size();i++){
        if(b[i]=='X')
            x2++;
        else
            break;
    }
    if(a.back()==b.back()){
        if(a.back()=='S'){
            if(x1>x2)
                return "<";
            else if(x1<x2)
                return ">";
            else
                return "=";
        }
        else{
            if(x1>x2)
                return ">";
            else if(x1<x2)
                return "<";
            else
                return "=";
        }
         
    }
    if(a.back()=='S'&&b.back()=='L')
        return "<";
    else if(a.back()=='L'&&b.back()=='S')
        return ">";
    else if(a.back()=='S'&&b.back()=='M')
        return "<";
    else if(a.back()=='M'&&b.back()=='S')
        return ">";
    else if(a.back()=='M'&&b.back()=='L')
        return "<";
    else if(a.back()=='L'&&b.back()=='M')
        return ">";
    return "=";
}
int main(){
    int t,n;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        cout<<calc(a,b)<<"\n";
    }
}