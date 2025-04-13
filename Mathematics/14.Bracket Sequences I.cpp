#include <bits/stdc++.h>
using namespace std;
#define VLL vector<long long>
#define ll long long
const int mod = 1e9 + 7;
const int maxval = 2e6 + 10;
ll exp(ll base, ll pow){
    ll ans = 1%mod;
    while(pow){
        if(pow&1) ans = 1LL*ans*base%mod;
        base = 1LL*base*base%mod;
        pow>>=1;
    }
    return ans;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n; cin>>n;
    if(n%2==1){
        cout <<0;
        return 0;
    }
    n/=2;
    VLL fact(2*n+1);
    fact[0] = 1;
    for(ll i = 1; i<=2*n; i++){
        fact[i] = (fact[i-1]*i) % mod;
    }
    ll num = fact[2*n]%mod;
    ll denom = (fact[n]*fact[n]%mod)*(n+1)%mod;
    ll denom_inv = exp(denom, mod-2)%mod;
    ll ans = num*denom_inv%mod;
    cout << ans;
    return 0;
}