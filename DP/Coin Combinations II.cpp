#include <bits/stdc++.h>
using namespace std;
#define MII map<int, int>
#define VI vector<int>
#define VLL vector<long long>
#define VII vector<vector<int>>
#define ll long long
const int mod = 1e9+7;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,x; cin>>n>>x;
    VI c(n);
    for(int i = 0;i <n ;i++) cin>>c[i];
    VII dp(n+1, VI(x+1,0));
    dp[0][0] = 1;
    for(int i = 1 ; i<=n; i++){
        for(int j = 0; j<=x ;j++){
            dp[i][j] = dp[i-1][j];
            if((j-c[i-1])>=0){
                (dp[i][j]+=dp[i][j-c[i-1]])%=mod;
            }
        }
    }
     cout << dp[n][x] << endl;
}