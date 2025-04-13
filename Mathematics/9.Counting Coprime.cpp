#include <bits/stdc++.h>
using namespace std;
#define MII map<int, int>
#define VI vector<int>
#define VLL vector<long long>
#define ll long long
const int mod = 1e9+7;
const int maxval = 1e6+5;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n; cin>>n;
    VI val(n);
    for(int i  = 0 ;i<n;i++) cin>>val[i];
    vector<VI> divisorof(maxval);
    for(int i = 2; i<maxval; i++){
        if(divisorof[i].size()==0){
            divisorof[i].push_back(i);
            for(int j  = 2*i; j<maxval; j+=i){
                divisorof[j].push_back(i);
            }
        }
    }
    VI VD(maxval); // valueDivisibleby
    VI PD(maxval); // Primedivisorof
    for(int i = 0 ; i<n;i++){
        for(int mask = 1; mask<(1<<divisorof[val[i]].size()); mask++){
            int prod = 1;
            int bits = 0;
            for(int pos = 0 ; pos < divisorof[val[i]].size();pos++){
                if(mask&(1<<pos)){
                    prod*=divisorof[val[i]][pos];
                    bits++;
                }
            }
            VD[prod]++;
            PD[prod] = bits;
        }
    }
    ll ttlpairs = (((ll)n)*((ll)(n-1)))/2;
    ll validpairs = 0;
    for(int i = 0 ;i<maxval; i++){
        if(PD[i]%2){
            validpairs+=((ll)VD[i]*((ll)VD[i]-1))/2;
        }else{
            validpairs-=((ll)VD[i]*((ll)VD[i]-1))/2;
        }
    }
    cout << ttlpairs - validpairs;
}