#include<bits/stdc++.h>
using namespace std;
// #define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;
const unsigned int N = 100005;

void solve(){
    int n, m; 
    cin >> n >> m; 
    vector<string> v(n); 
    for(int i = 0; i < n; i++) cin >> v[i];
    vector<int> s, t; 
    vector<vector<int>> dist(n, vector<int>(m, -1));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(v[i][j] == 'A') s = {i, j};
            else if(v[i][j] == 'B') t = {i, j};
        }
    }
    queue<pair<int, int>> q;
    q.push({s[0], s[1]});
    dist[s[0]][s[1]] = 0;
    vector<pair<int, int>> dirs = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    while(!q.empty()) {
        int x = q.front().first, y = q.front().second;
        q.pop();
        for(auto& dir : dirs) {
            int nx = x + dir.first, ny = y + dir.second;
            if(nx >= 0 && nx < n && ny >= 0 && ny < m && v[nx][ny] != '#' && dist[nx][ny] == -1) {
                dist[nx][ny] = dist[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }
    if(dist[t[0]][t[1]] != -1) cout << dist[t[0]][t[1]] << endl; 
    else cout << -1 << endl;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--){
        solve(); 
    }
    return 0;
}