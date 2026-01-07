#include <bits/stdc++.h>
using namespace std;
#define VLL vector<long long>
#define ll long long
const int mod = 1e9 + 7;
const int maxval = 1e6 + 10;
ll exp(ll base, ll pow){
    ll ans = 1;
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
    for(int i = 1; i<maxval; i++){
        fact[i] = (fact[i-1]*i) % mod;
    }
    string s; cin>>s;
    ll n = s.size();
    unordered_map<char,int> mp;
    for(int i =0 ;i<n; i++){
        mp[s[i]]++;
    }
    ll num = fact[n] % mod;
    ll denom =1;
    for(auto &[ch,cnt]:mp){
        denom = (denom* fact[cnt])%mod;
    }
    ll ans = (num*exp(denom,mod-2)%mod)%mod;
    cout << ans << "\n";
}