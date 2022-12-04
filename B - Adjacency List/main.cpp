#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int N, M; 
    cin >> N >> M; 
    vector<vector<int>> g(N+1);
    for(int i = 0; i < M; i++){
        int v1, v2; 
        cin >> v1 >> v2; 
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }

    for(int i = 1; i < N+1; i++){
        cout << g[i].size() <<" ";
        sort(g[i].begin(), g[i].end());
        for(int j = 0; j < g[i].size(); j++) cout << g[i][j] << " ";
        cout << endl; 
    }
    return 0;
}