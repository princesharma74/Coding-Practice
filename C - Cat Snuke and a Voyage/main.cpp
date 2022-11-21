#include<bits/stdc++.h>
using namespace std;
#define ll long long

void dfs(vector<vector<int>> &g, int vertex, int mark[], int n_ver){
    /**
     * Entering the vertex.
     */
    cout << vertex << " ";
    // mark the vertex visited
    mark[vertex] = 1; 
    for(int &child : g[vertex]){
        /**
         * Entering the child.
         */
        if(mark[child]) continue;
        dfs(g, child, mark, n_ver);
        /**
         * Exiting the child
         * 
         */
    }
    /**
     * Exiting the vertex
     * 
     */
}

int main(){
    int N, M; 
    cin >> N >> M; 
    /**
     * Representing graph using adjacency list 
     */

    vector<vector<int>> g(N+1);
    int vis[N+1] = {0};
    for(int i = 0; i < M; i++){
        int a, b; 
        cin >> a >> b; 
        g[a].push_back(b); 
        g[b].push_back(a); 
    }

    dfs(g, 1, vis, N);
    cout << endl; 
    for(int i = 1; i <= N; i++){
        cout << i << "-> "; 
        for(int it : g[i]){
            cout << it << ", "; 
        }
        cout << endl;
    }
    return 0;
}