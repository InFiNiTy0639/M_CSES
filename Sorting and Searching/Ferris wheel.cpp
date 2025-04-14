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
    ll n,x; cin>>n>>x;
    VLL p(n);
    for(int i = 0 ;i<n; i++) cin>>p[i];
    sort(p.begin(),p.end());
    ll cnt = n ,i = 0, j =n-1;
    while(i<j){
        if(p[i]+p[j]<=x){
            cnt--;
            i++;
            j--;
        }else j--;
    }
    cout << cnt << "\n";
    return 0;
}