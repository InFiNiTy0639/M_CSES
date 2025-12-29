#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll k; cin>>k;
    ll len = 1;
    ll cnt = 9;
    ll startNum = 1;
    while(k> len*cnt){
        k-=len*cnt;
        len++;
        cnt*=10;
        startNum*=10;
    }
    ll targetnum =startNum + (k-1)/len;
    string s = to_string(targetnum);
    cout << s[(k-1)%len] << "\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q; cin>>q;
    while(q--)solve();
    return 0;

}