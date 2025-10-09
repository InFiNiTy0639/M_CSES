#include <bits/stdc++.h>
using namespace std;
vector<string> board(8);
int cnt = 0;
bool rowOcc[8], mainDiagOcc[15], antiDiagOcc[15];
void search(int c){
    if(c==8){
        cnt++;
        return;
    }
    for(int r = 0 ;r<8;r++){
        int mainDiagIdx = r-c+7, antiDiagIdx = r+c;
        if(board[r][c]=='.' && 
        !rowOcc[r] && !mainDiagOcc[mainDiagIdx] 
        && !antiDiagOcc[antiDiagIdx]){
            rowOcc[r] = true;
            mainDiagOcc[mainDiagIdx] = true;
            antiDiagOcc[antiDiagIdx] = true;
 
            // Recurse to next column
            search(c+1);
            // Backtrack: "remove" the queen by unmarking the row and diagonals
            rowOcc[r] = false;
            mainDiagOcc[mainDiagIdx] = false;
            antiDiagOcc[antiDiagIdx] = false;
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    for(int i = 0 ; i<8; i++) cin>>board[i];
    search(0);
    cout << cnt << endl;
    return 0;
}