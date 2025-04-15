#include <bits/stdc++.h>
using namespace std;
#define MII map<int, int>
#define VI vector<int>
#define VII vector<VI>
#define VLL vector<long long>
#define ll long long
const int mod = 1e9+7;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin>>n;
    VII dp(n, VI(n,0));
    dp[0][0] = 1;
    for(int i =0 ;i<n;i++){
        string r; cin>>r;
        for(int j = 0; j<n ;j++){
            if(r[j]=='.'){
                if(i>0){
                    (dp[i][j]+=dp[i-1][j])%=mod;
                }
                if(j>0){
                    (dp[i][j]+=dp[i][j-1])%=mod;
                }
            }else{
                dp[i][j] = 0;
            }
        }
    }
    cout << dp[n-1][n-1] << endl;
    return 0;
}