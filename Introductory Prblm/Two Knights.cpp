// K^2C2 - 4*(k-1)*(k-2)
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n; cin >> n;
    for (ll k = 1; k <= n; k++) {
        ll total = (k * k) * (k * k - 1) / 2;   // total ways to place 2 knights
        ll attack = 4 * (k - 1) * (k - 2);      // attacking pairs
        cout << total - attack << "\n";
    }
    return 0;
}