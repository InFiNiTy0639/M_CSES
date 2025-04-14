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
    ll n ; cin>>n;
    ll ans = exp(2,n)%mod;
    cout << ans << "\n";
    return 0;
}