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
    int n; cin>>n;
    VLL p(n);
    ll ttlsum = 0, ans = INT_MAX;
    for(int i  = 0;i<n;i++){
         cin>>p[i];
         ttlsum+=p[i];
    }
    for(int mask = 0; mask<(1<<n); mask++){
        ll sum = 0;
        for(int j = 0; j<n ;j++){
            if(mask&1<<j) sum+=p[j];
        }
        ll diff = abs(ttlsum-2*sum);
        ans = min(ans,diff);
    }
    cout << ans;
    return 0;
}