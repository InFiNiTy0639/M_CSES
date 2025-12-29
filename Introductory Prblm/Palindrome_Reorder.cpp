#include <bits/stdc++.h>
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin>>s;
    vector<int> cnt(26,0);
    for(char c:s)cnt[c-'A']++;
    // check how many char have an odd cnt;
    int oddCnt= 0 ;
    char midChar = 0 ;
    for(int i = 0 ; i<26; i++){
        if(cnt[i]%2!=0){
            oddCnt++;
            midChar = (char)('A'+i);
        }
    }
    // if more than one char has an odd cnt, no soln exist
    if(oddCnt>1){
        cout << "NO SOLUTION\n";
        return 0;
    }
    // build first half palindrome
    string firstH;
    for(int i = 0 ; i< 26; i++){
        firstH+=string(cnt[i]/2,(char)('A'+i));
    }
    string secondH = firstH;
    reverse(secondH.begin(),secondH.end());
    cout << firstH;
    if(midChar!=0) cout << midChar;
    cout << secondH << " \n";
    return 0;
}