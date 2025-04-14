#include <bits/stdc++.h>
using namespace std;

void SolveHanoi(int n, int start, int end, int temp) {
    if (n == 1) {
        cout << start << " " << end << "\n";
        return;
    }
    SolveHanoi(n - 1, start, temp, end);
    cout << start << " " << end << "\n";
    SolveHanoi(n - 1, temp, end, start);
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    cout << (1<<n)-1 << endl;
    SolveHanoi(n, 1, 3, 2);
    return 0;
}