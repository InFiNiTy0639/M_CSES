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
    ll n, x; cin>>n>>x;
    VLL a(n);
    for(int i = 1; i<=n ;i++) cin>>a[i];
    ll currsum = 0;
    int cnt = 0, l = 1;
    for(int r = 1 ;r<=n ;r++){
        currsum+=a[r];
        while(currsum>x && l<=r){
            currsum-=a[l];
            l++;
        }
        if(currsum == x) cnt++;
    }
    cout << cnt << endl; 
}