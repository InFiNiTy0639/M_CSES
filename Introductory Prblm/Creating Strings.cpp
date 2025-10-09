#include <bits/stdc++.h>
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin>>s;
    sort(s.begin(),s.end());
    vector<string> permutation;
    do{
        permutation.push_back(s);
    } while (next_permutation(s.begin(),s.end()));
    cout << permutation.size() << endl;
    for(const string &p: permutation) cout << p << endl;
    return 0;
}