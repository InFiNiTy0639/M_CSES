#include <bits/stdc++.h>
using namespace std;
#define MII map<int, int>
#define VI vector<int>
#define VLL vector<long long>
#define ll long long
const int mod = 1e9+7;
const int N = 1e6+5;
void solve(){
    int n; cin>>n;
    if(n<2){
        cout << 0 << "\n";
        return;
    }
    VI freq(N,0);
    int maxval = 0 ;
    while(n--){
        int x; cin>>x;
        freq[x]++;
        maxval = max(maxval,x);
    }
    for(int i = maxval; i>=1;i--){
        int cnt = 0 ;
        for(int j = i ; j<=maxval; j+=i){
            cnt+=freq[j];
            if(cnt>=2){
                cout << i << "\n";
                return;
            }
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int q=1; 
    // cin>>q;
    while(q--) solve();
	return 0;
}