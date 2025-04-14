#include <bits/stdc++.h>
using namespace std;
#define MII map<int, int>
#define VI vector<int>
#define VLL vector<long long>
#define ll long long
const int mod = 1e9+7;
const int maxN = 2e5+1;
ll N,T,cnt;
VLL k(maxN);
bool check(ll t){
    cnt = 0;
    for(int i = 0; i<N;i++){
        cnt+=t/k[i];
        if(cnt>=T) return true;
    }
    return false;
}
 int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>N>>T;
    for(int i = 0 ; i<N;i++) cin>>k[i];
    ll low = 1, high = 1e18, ans = high;
    while(low<=high){
        ll mid = low + (high - low)/2;
        if(check(mid)){
            ans = mid;
            high = mid-1;
        }else{
            low = mid + 1;
        }
    }
    cout << ans << "\n";
}