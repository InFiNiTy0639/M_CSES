#include<bits/stdc++.h>
using namespace std;
bool vis[9][9];
string pattern;
long long pathcnt = 0;
int dr[4] = {0,0,1,-1};
int dc[4] = {1,-1,0,0};
int getdirIdx(char c){
    if(c == 'R') return 0;
    if(c == 'L') return 1;
    if(c == 'D') return 2;
    if(c == 'U') return 3;
    return -1;
}
void solve(int r, int c, int step){
    if(r == 7 && c == 1){
        if(step == 48) pathcnt++;
        return;
    }
    if(vis[r][c-1] && vis[r][c+1] && !vis[r-1][c] && !vis[r+1][c]) return;
    if(vis[r-1][c] && vis[r+1][c] && !vis[r][c-1] && !vis[r][c+1]) return;
    char curr = pattern[step];
    if(curr != '?'){
        int dir = getdirIdx(curr);
        int nr = r+dr[dir], nc = c + dc[dir];
        if(!vis[nr][nc]){
            vis[nr][nc] = 1;
            solve(nr,nc,step+1);
            vis[nr][nc] = 0;
        }
    }
    else{
        if(!vis[r][c+1]){
            vis[r][c+1] = true;
            solve(r,c+1,step+1);
            vis[r][c+1] = false;
        }
        if(!vis[r][c-1]){
            vis[r][c-1] = true;
            solve(r,c-1,step+1);
            vis[r][c-1] = false;
        }
        if (!vis[r+1][c]) {
            vis[r+1][c] = true;
            solve(r+1, c, step + 1);
            vis[r+1][c] = false;
        }
        if (!vis[r-1][c]) {
            vis[r-1][c] = true;
            solve(r-1, c, step + 1);
            vis[r-1][c] = false;
        }
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>pattern;
    for(int i = 0; i<9 ;i++){
        vis[i][0] = 1;
        vis[i][8] = 1;
        vis[0][i] = 1;
        vis[8][i] = 1;
    }
    for(int i = 1; i<=7; i++){
        for(int j = 1; j<=7; j++) vis[i][j] = 0;
    }
    vis[1][1] = 1;
    solve(1,1,0);
    cout << pathcnt << "\n";
    return 0;
}