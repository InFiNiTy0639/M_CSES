#include <bits/stdc++.h>
using namespace std;
#define VLL vector<long long>
#define ll long long
const int mod = 1e9 + 7;
const int maxval = 2e6 + 10;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n; cin>>n;
    VLL D(n+1);
    D[1] = 0, D[2] = 1;
    for(ll i = 3 ; i<=n;i++){
        D[i] = (((D[i-1] + D[i-2])%mod)*(i-1))%mod;
    }
    cout << D[n];
    return 0;
}