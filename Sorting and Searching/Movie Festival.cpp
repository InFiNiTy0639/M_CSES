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
    vector<pair<int,int>> p;
    for(int i = 0; i<n ;i++){
        int x,y; cin>>x>>y;
        p.push_back({y,x});
    }
    sort(p.begin(),p.end());
    int curr_end = 0, ttl = 0;
    for(size_t i = 0; i<p.size(); i++){
        if(p[i].second>=curr_end){
            curr_end = p[i].first;
            ttl++;
        }
    }
    cout << ttl << endl;
    return 0;
}