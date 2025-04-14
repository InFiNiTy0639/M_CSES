#include <bits/stdc++.h>
using namespace std;
#define MII map<int, int>
#define VI vector<int>
#define VLL vector<long long>
#define ll long long
const int mod = 1e9+7;
 
ll exp(ll base, ll pow) {
    ll ans = 1 % mod;
    while (pow) {
        if (pow & 1) ans = (1LL * base * ans) % mod;
        base = (1LL * base * base) % mod;
        pow >>= 1;
    }
    return ans;
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n; cin >> n;
    VLL x(n);
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> x[i];
        sum = (sum + x[i]) % mod;
    }
    ll num = (n % mod) * ((n + 1) % mod) % mod;
    ll denom = exp(2, mod - 2) % mod;
    ll ttlsum = (num * denom) % mod;
    ll ans = (ttlsum - sum) % mod;
    if (ans < 0) ans += mod;
    cout << ans << endl;
    return 0;
}

// 2nd Approach 

// ll n ;cin>>n;
// VLL x(n);
// for(int i= 0 ; i<n ;i++) cin>>x[i];
// ll ttlxor = 0 , numxor = 0;
// for(int i = 0; i<=n;i++) ttlxor^=i;
// for(ll num:x) numxor^=num;
// ll ans  = ttlxor^numxor;
// cout << ans << "\n";