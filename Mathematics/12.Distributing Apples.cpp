#include <bits/stdc++.h>
using namespace std;
#define VLL vector<long long>
#define ll long long
const int mod = 1e9 + 7;
const int maxval = 2e6 + 10;
ll exp(ll base, ll pow){
    ll ans = 1%mod;
    while (pow){
        if (pow & 1) ans = ans * base % mod;
        base = base * base % mod;
        pow >>= 1;
    }
    return ans;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    VLL fact(maxval);
    fact[0] = 1, fact[1] = 1;
    for(int i = 2; i<=maxval; i++){
        fact[i] = (fact[i-1]*i)%mod;
    }
    ll n,m; cin>>n>>m;
    ll num = fact[n+m-1]%mod;
    ll denom = ((fact[n-1]) * (fact[m]))%mod;
    ll denom_inv = exp(denom,mod-2)%mod;
    ll ans = ((num * denom_inv) % mod + mod) % mod;
    cout << ans << "\n";
}