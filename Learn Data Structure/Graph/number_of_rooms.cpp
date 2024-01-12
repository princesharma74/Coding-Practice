#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;
const unsigned int N = 100005;

void solve() {
    int n, m; 
    cin >> n >> m; 
    vector<string> v(n);
    for(int i = 0; i < n; i++) cin >> v[i]; 
    vector<vector<int>> dist(n, vector<int>(m, -1));
    queue<pair<int, int>> q;
    int ans = 0;
    vector<pair<int, int>> dirs = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(v[i][j] == '.' && dist[i][j] == -1){
                ans++;
                dist[i][j] = 0;
                q.push({i, j});
                while(!q.empty()) {
                    int x = q.front().first, y = q.front().second;
                    q.pop();
                    for(auto& dir : dirs) {
                        int nx = x + dir.first, ny = y + dir.second;
                        if(nx >= 0 && nx < n && ny >= 0 && ny < m && v[nx][ny] == '.' && dist[nx][ny] == -1) {
                            dist[nx][ny] = 0;
                            q.push({nx, ny});
                        }
                    }
                }
            }
        }
    }
    cout << ans << endl; 
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--){
        solve(); 
    }
    return 0;
}