#include <bits/stdc++.h>
using namespace std;
#define MII map<int, int>
#define VI vector<int>
#define VLL vector<long long>
#define ll long long
const int mod = 1e9+7;
const int N = 1e6+9;
int H[N];
// 1st approach
void divisors1(){
    int n; cin>>n;
    VLL divs;
    for(int i = 1 ;1LL*i*i<=n; i++){
        if(n%i == 0){
            divs.push_back(i);
            if(i!=n/i) divs.push_back(n/i);
        }
    }
    cout << divs.size() << "\n";
}
// 2nd Approach

// void divisors2(){
//     for(int i = 1 ; i<N ;i++){
//         for(int j = i; j<N ;j+=i) H[j]++;
//     }
// }
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // divisors2();
    int q; cin>>q;
    while(q--){
        // int n; cin>>n;
        // cout << H[n] << "\n";
        divisors1();
    }  
	return 0;
}