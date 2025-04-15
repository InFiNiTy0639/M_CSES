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
    string n,m; cin>>n>>m;
    int x = n.size(), y = m.size();
    VII dp(x+1, VI(y+1, INT_MAX));
    dp[0][0] = 0;
    for(int i = 0; i<=x ;i++){
        for(int j = 0; j<=y; j++){
            if(i>0){
                dp[i][j] = min(dp[i][j],dp[i-1][j]+1);
            }
            if(j>0){
                dp[i][j] = min(dp[i][j],dp[i][j-1]+1);
            }
            if(i>0 && j>0){
                dp[i][j] = min(dp[i][j],dp[i-1][j-1]+(n[i-1]!=m[j-1]));
            }
        }
    }
    cout << dp[x][y] << "\n";
    return 0;
}