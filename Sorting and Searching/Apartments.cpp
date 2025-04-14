#include <bits/stdc++.h>
using namespace std;
#define MII map<int, int>
#define VI vector<int>
#define VLL vector<long long>
#define ll long long
const int mod = 1e9+7;
 int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,m,k; cin>>n>>m>>k;
    VLL a(n), b(m);
    for(ll i = 0; i<n; i++) cin>>a[i];
    for(ll i = 0;i<m; i++) cin>>b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    ll cnt = 0, i=0,j=0;
    while(i<n && j<m){
        if(abs(a[i]-b[j])<=k){
            cnt++;
            i++;
            j++;
        }
        else if(a[i]<b[j]) i++;
        else j++;
    }
    cout << cnt <<endl;
    return 0;    
}