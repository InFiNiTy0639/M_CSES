#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        int n,a,b; cin>>n>>a>>b;
        bool possible = (a>0 && b>0) || (a==0 && b==0);
        if(a+b>n || !possible){
            cout << "NO\n";
            continue;;
        }
        cout << "YES\n";
        if(a==0 && b==0){
            for(int i = 1; i<=n ;i++) cout << i << (i==n? "":" ");
            cout << "\n";
            for(int i = 1; i<=n ;i++) cout << i << (i==n ? "":" ");
            cout << "\n";
            continue;; 
        }
        vector<int> p1C, p2C;
        for(int i = 1; i<=b; i++){
            p1C.push_back(i);
            p2C.push_back(a+i);
        }
        for(int i = 1; i<=a; i++){
            p1C.push_back(b+i);
            p2C.push_back(i);
        }
        for(int i = a+b+1; i<=n; i++){
            p1C.push_back(i);
            p2C.push_back(i);
        }
        for(int i = 0 ; i<n; i++)cout << p1C[i] << (i==n-1?"":" ");
        cout << "\n";
        for(int i = 0; i<n; i++) cout<< p2C[i] << (i==n-1?"":" ");
        cout << "\n";
    }
}