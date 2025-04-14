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
    VLL a(n);
    for(int i = 0; i<n ;i++) cin>>a[i];
    map<ll,ll> freq;
    freq[0] = 1;
    ll sum  = 0 ,cnt = 0;
    for(int i = 0;i<n;i++){
        sum+=a[i];
        ll rem = ((sum%n)+n)%n;
        cnt+=freq[rem];
        freq[rem]++;
    }
    cout << cnt << "\n";
    return 0;
}