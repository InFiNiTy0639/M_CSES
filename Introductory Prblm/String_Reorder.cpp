#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    int n = s.size();
    vector<int> cnt(26);
    for (char c : s) cnt[c - 'A']++;
    int mx = *max_element(cnt.begin(), cnt.end());
    if (mx > (n + 1) / 2) {
        cout << -1;
        return 0;
    }
    string res;
    char last = 0;
    for (int i = 0; i < n; i++) {
        int rem = n - i;
        int best = max_element(cnt.begin(), cnt.end()) - cnt.begin();
        int pick = -1;
        if (2 * cnt[best] == rem + 1) pick = best;
        else {
            for (int c = 0; c < 26; c++) {
                if (cnt[c] && c + 'A' != last) {
                    pick = c;
                    break;
                }
            }
        }
        res += char(pick + 'A');
        cnt[pick]--;
        last = char(pick + 'A');
    }
    cout << res;
    return 0;
}