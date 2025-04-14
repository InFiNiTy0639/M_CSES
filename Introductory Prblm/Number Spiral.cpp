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
    ll t; cin>>t;
    while(t--){
        ll x,y; cin>>x>>y;
        if(x<y){
            if(y%2==1){
                ll m = y*y;
                cout << m-x+1 << endl;;
            }else{
                ll m = (y-1)*(y-1) + 1;
                cout << m+x-1 << endl;
            }
        }
        else{
            if(x%2==0){
                ll m = x*x;
                cout << m-y+1 << endl;
            }else{
                ll m = (x-1)*(x-1) + 1;
                cout << m + y -1 << endl;
            }
        }
    }
}