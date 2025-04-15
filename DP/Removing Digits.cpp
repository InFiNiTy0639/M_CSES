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
    VI dp(n+1, INT_MAX);
    dp[0] = 0;
    for(int i =1; i<=n ;i++){
        string s = to_string(i);
        for(char c:s){
            int digit = c-'0';
            if(digit>0 && i-digit>=0){
                dp[i] = min(dp[i],dp[i-digit]+1);
            }
        }
    } 
    cout << dp[n] << endl;
    return 0;
}