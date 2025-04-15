#include <bits/stdc++.h>
using namespace std;
#define MII map<int, int>
#define VI vector<int>
#define VLL vector<long long>
#define VII vector<VI>
#define ll long long
const int mod = 1e9+7;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,x; cin>>n>>x;
    VI h(n), s(n);
    for(int i = 0 ;i<n ;i++) cin>> h[i];
    for(int i = 0 ;i<n ;i++) cin>> s[i];
    VII dp(n+1, VI(x+1,0));
    for(int i = 1; i<=n ;i++){
        for(int j = 0 ; j<=x; j++){
            dp[i][j] = dp[i-1][j];
            if((j-h[i-1])>=0){
                dp[i][j] = max(dp[i][j],dp[i-1][j-h[i-1]]+s[i-1]);
            }
        }
    }
    cout << dp[n][x] << "\n";
    return 0;
}