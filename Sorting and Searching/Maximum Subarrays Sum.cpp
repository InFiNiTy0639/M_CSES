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
    VLL x(n);
    ll currsum = 0, maxsum = INT_MIN;
    for(int i = 0 ; i<n ;i++){
        cin>>x[i];
        currsum = max(currsum+x[i],x[i]);
        maxsum  = max(maxsum,currsum);
    }
    cout << maxsum << endl;
}