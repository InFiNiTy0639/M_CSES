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
    for(int i = 0;i<n ;i++) cin>>p[i];
    sort(p.begin(),p.end());
    int mid = (n)/2;
    ll ttlcost = 0;
    for(int i = 0;i<n;i++){
        ll diff = abs(p[mid]-p[i]);
        ttlcost+=diff;
    }
    cout << ttlcost << endl;
}