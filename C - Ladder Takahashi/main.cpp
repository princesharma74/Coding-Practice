#include<bits/stdc++.h>
#define long long ll
using namespace std; 

void dfs(int vertex, vector<vector<int>> &g, vector<bool> &vis, int &max){
    /** Take action on vertex after entering the vertex */
    if(max < vertex) max = vertex;
    vis[vertex] = true;
    for(int child : g[vertex]){
        if(vis[child]) continue;
        /**
         * Take action on child before entering the child node 
         */
        dfs(child, g, vis, max);
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
    int L; 
    cin >> L; 
    vector<vector<int>> g(100);
    vector<bool> vis(100, false);

    for(int i = 0; i < L; i++){
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

    int max = 1;
    dfs(1, g, vis, max);
    cout << max << endl; 

    // for(int i = 0; i < 100; i++){
    //     if(!g[i].empty()){
    //         cout << i <<"->";
    //         for(auto it : g[i]){
    //             cout << ", " << it;
    //         }
    //         cout << endl;
    //     }
    // }
    return 0; 
}