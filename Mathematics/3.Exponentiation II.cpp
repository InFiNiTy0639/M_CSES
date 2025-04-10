#include <bits/stdc++.h>
using namespace std;
#define MII map<int, int>
#define VI vector<int>
#define VLL vector<long long>
#define ll long long
const int mod = 1e9+7;
ll exp(ll base, ll pow, ll m = mod){
    base%=mod;
    ll ans = 1 % m;
    while(pow){
        if(pow&1) ans = 1LL*ans*base % m;
        base = 1LL*base*base % m;
        pow>>=1;
    }
    return ans;
}
void solve(){
    ll a,b,c; cin>>a>>b>>c;
    ll first = exp(b,c,mod-1);
    cout << exp(a,first,mod) << endl;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll q;
    cin>>q;
    while(q--) solve();   
	return 0;
}