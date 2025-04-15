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
    deque<int> dp = {1};
    for(int i = 1; i<=n ;i++){
        int curr = 0;
        for(int j = 1; j<=6 ;j++){
            if(i-j<0) break;
            curr = (curr+ dp[dp.size()-j])%mod;
        }
        dp.push_back(curr);
        if(dp.size()>6) dp.pop_front();
    }
    cout << dp.back() << endl;
}