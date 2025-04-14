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
    ll cnt = 0 ;
    ll n ; cin>>n;
    VLL x(n);
    for(int i =0 ;i<n;i++) cin>>x[i];
    for(int i = 1;i<n; i++){
        if(x[i-1]>x[i]){
            ll diff  = x[i-1]-x[i];
            cnt+=diff;
            x[i] = x[i-1];
        }
    }
    cout << cnt << "\n";
    return 0;
}