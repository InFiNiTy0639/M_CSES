#include <bits/stdc++.h>
using namespace std;
#define MII map<int, int>
#define VI vector<int>
#define VLL vector<long long>
#define ll long long
const int mod = 1e9+7;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,k; cin>>n>>k;
    VLL p(k);
    for(ll i = 0 ; i<k ;i++) cin>>p[i];
    ll cnt = 0 ;
    for(ll mask =1; mask<(1<<k);mask++){
        ll prod = 1, bits = 0;
        for(ll i = 0 ; i<k; i++){
            if(mask&(1<<i)){
                if(prod>n/p[i]){
                    prod = n+1;
                    break;
                }
                bits++;
                prod*=p[i];
            }
        }
        if(prod>n) continue;
        if(bits%2==1) cnt+=n/prod;
        else cnt-=n/prod;
    }
    cout << cnt << "\n";
    return 0;
}