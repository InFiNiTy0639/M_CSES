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
    int n; cin>>n;;
    set<int> st;
    for(int i = 0;i<n;i++) {
        int x;cin>>x;
        st.insert(x);
    }
    cout << st.size() << endl;
}