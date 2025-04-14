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
    string s; cin>>s;
    if(s.empty()){
        cout << "0\n";
        return 0;
    }
    ll maxcnt = 1, currcnt = 1;
    for(size_t i = 0 ;i<s.size()-1;i++){
        if(s[i] == s[i+1]){
            currcnt++;
            maxcnt = max(maxcnt,currcnt);
        }
        else currcnt = 1;
    }
    cout << maxcnt << "\n";
}