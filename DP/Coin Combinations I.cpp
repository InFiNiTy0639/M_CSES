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
    int n,x; cin>>n>>x;
    VI c(n);
    for(int i = 0;i <n ;i++) cin>>c[i];
    VI dp(x+1,0);
    dp[0] = 1;
    for(int i = 0 ; i<=x; i++){
        for(int j = 0; j<n ;j++){
            if(i-c[j]>=0){
                (dp[i]+=dp[i-c[j]])%=mod;
            }
        }
    }
     cout << dp[x] << endl;
}