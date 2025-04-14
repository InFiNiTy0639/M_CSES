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
    ll n,m; cin>>n>>m;
    VLL h(n), t(m);
    for(int i = 0;i<n ;i++) cin>>h[i];
    for(int i = 0;i<m; i++) cin>>t[i];
    multiset<int,greater<int>>s;
    for(int i = 0;i<n;i++) s.insert(h[i]);
    for(int i = 0 ;i<m;i++){
        auto it = s.lower_bound(t[i]);
        if(it != s.end()){
            cout << *it << "\n";
            s.erase(it);
        }
        else cout << -1 << endl;
    }
}