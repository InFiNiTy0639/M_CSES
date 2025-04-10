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
ll p[100001], k[100001];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin>>n;
    for(int i = 0 ; i<n; i++) cin>>p[i]>>k[i];
    ll divcnt = 1, divsum = 1, divprod =1, divcnt2 = 1;
    for(int i = 0;i<n;i++){
        divcnt = divcnt*(k[i]+1)%mod;
        divsum = divsum*(exp(p[i],k[i]+1)-1)%mod * exp(p[i]-1,mod-2)%mod;
        divprod = exp(divprod,k[i]+1)*exp(exp(p[i],(k[i]*(k[i]+1)/2)),divcnt2)%mod;
        divcnt2 = divcnt2*(k[i]+1)%(mod-1);
    }
    cout << divcnt << ' '<< divsum << ' ' << divprod;
    return 0;
}