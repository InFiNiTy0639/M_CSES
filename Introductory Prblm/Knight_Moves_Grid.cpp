#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;cin>>n;
    vector<vector<int>> dist(n,vector<int>(n,-1));
    queue<pair<int,int>>q;
    int dx[] = {2,2,-2,-2,1,1,-1,-1};
    int dy[] = {1,-1,1,-1,2,-2,2,-2};
    dist[0][0] = 0;
    q.push({0,0});
    while(!q.empty()){
        auto[x,y] = q.front(); q.pop();
        for(int i = 0; i<8; i++){
            int nx = x+dx[i], ny = y+dy[i];
            if(nx>=0 && ny>=0 && nx<n && ny<n && dist[nx][ny] == -1){
                dist[nx][ny] = dist[x][y] + 1;
                q.push({nx,ny});
            }
        }
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++) cout << dist[i][j] << " ";
        cout << "\n";
    }
    return 0;
}