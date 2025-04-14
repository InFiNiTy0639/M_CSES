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
    ll n; cin>>n;
    while(true){
        cout << n << " ";
        if(n==1) break;
        if(n%2==0) n/=2;
        else n = 3*n+1;
    }
    cout << endl;
    return 0;
}