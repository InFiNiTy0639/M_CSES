#include <bits/stdc++.h>
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin>>n;
    int ans = 0 ;
    for(int i = 5; i<=n; i*=5) ans+=(n/i);
    cout << ans << endl;
    return 0;
}