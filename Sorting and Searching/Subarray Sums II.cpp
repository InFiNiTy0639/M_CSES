#include <bits/stdc++.h>
using namespace std;
#define MII map<int, int>
#define VI vector<int>
#define VLL vector<long long>
#define ll long long
const int mod = 1e9+7;
int n;
ll x,cnt,pref,a;
 int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>x;
    map<ll,int> freq;
    freq[0]  = 1;
    for(int i = 0 ; i<n ;i++){
        cin>>a;
        pref+=a;
        cnt+=freq[pref-x];
        freq[pref]++;
    }
    cout << cnt << "\n";
}