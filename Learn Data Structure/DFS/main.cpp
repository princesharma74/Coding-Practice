#include<bits/stdc++.h>
using namespace std; 

void dfs(int vertex, vector<vector<int>> &g){
    /** Take action on vertex after entering the vertex */
    for(int child : g[vertex]){
        /**
         * Take action on child before entering the child node 
         */
        dfs(child, g);
        /**
         * Take action on child after exiting child node.          * 
         */
    }

    /**
     * Take action on vertex before exiting the vertex 
     * 
     */

}

int main(){
    int n, m; 
    cin >> n >> m; 

    int graph1[n][n];

    vector<vector<int>> g(n+1, vector<int>(n+1));
    bool vis[n];

    for(int i = 0; i < m; i++){
        int v1, v2; 
        cin >> v1 >> v2; 
        /**
            graph1[v1][v2] = 1; 
            graph1[v2][v1] = 1;
            graph1[v1][v2] = 1; 
            graph1[v2][v1] = 1;
        */

        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }

    /**
     * Adjacency matrix
     * O(N^2) - Space Complexity 
     * N = 10^5
     * 
     * Adjacency List
     * 
     */
    for(int i = 1; i <= n; i++){
        cout << i << "-> "; 
        for(int it : g[i]){
            cout << it <<", ";
        }
        cout << endl; 
    }
    return 0; 
}