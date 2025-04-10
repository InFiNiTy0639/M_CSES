#include <bits/stdc++.h>
using namespace std;
#define MII map<int, int>
#define VI vector<int>
#define VLL vector<long long>
#define ll long long
const int mod = 1e9+7;
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
    ll res = 0;
    for(ll i = 1,j; i<=n; i=j){
        ll q = n/i;
        j = n/q + 1;
        // sum range upto j-1
        ll jsum = (((j%mod)*((j-1)%mod))%mod * exp(2,mod-2))%mod;
        // sum range upto i-1
        ll isum = (((i%mod)*((i-1)%mod))%mod * exp(2,mod-2))%mod;
        ll rangeQ = (jsum - isum + mod)%mod;
        res = (res + (q%mod)*rangeQ)%mod;
    }
    cout << res << endl;
    return 0;
}