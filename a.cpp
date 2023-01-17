#include <bits/stdc++.h>
using namespace std;
void solve() {
    int a, b;
    cin >> a >> b;
    vector<int> A(a), B(b);
    for (int i=0; i<a; i++) cin >> A[i];
    for (int i=0; i<b; i++) cin >> B[i];
 
    sort(A.begin(), A.end());
 
    for (int i=0; i<B.size(); i++) {
        A[0] = B[i];
        sort(A.begin(), A.end());
    }
    int sum = 0;
    for (int i=0; i<A.size(); i++) sum+=A[i];
    cout << sum << '\n';
}
 
int main(){
    int t,n,m;
    cin>>t;
    while(t--){
      solve();
    }
}
