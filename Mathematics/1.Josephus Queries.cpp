#include <bits/stdc++.h>
using namespace std;
#define MII map<int, int>
#define VI vector<int>
#define VLL vector<long long>
#define ll long long
const int mod = 1e9+7;
ll remove(ll n, ll k){
    if(n==1) return 1;
    int mid = (n+1)/2;
    if(k<=mid){
        if(2*k>n) return 2*k%n;
        else return 2*k;
    }
    int nr = remove(n/2, k-mid);
    if(n%2 == 1) return 2*nr + 1;
    else return 2*nr -1;
}
void solve(){
    ll n,k; cin>>n>>k;
    cout << remove(n,k) << endl;
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
