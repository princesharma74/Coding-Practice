#include<bits/stdc++.h>
using namespace std;
#define ll long long

#define LIM 2e5
vector<vector<int>> g(LIM, vector<int>(LIM, 0));
vector<vector<int>> color(LIM, vector<int>(LIM, -1));

bool adding_edge_creates_bipartite_graph(int u, int v) {
    // create a queue and a color map
    queue<int> q;
    unordered_map<int, int> color;

    // mark u as black and v as white
    color[u] = 0;
    color[v] = 1;

    // add u and v to the queue
    q.push(u);
    q.push(v);

    // traverse the graph using BFS
    while (!q.empty()) {
        int curr = q.front();
        q.pop();

        // check all neighbors of the current vertex
        for (int v = 0; v < ) {
            // if the neighbor has not been colored yet, assign the opposite color
            if (color.find(neighbor) == color.end()) {
                color[neighbor] = 1 - color[curr];
                q.push(neighbor);
            }
            // if the neighbor has already been colored and has the same color as the current vertex, then adding an edge between u and v would not result in a bipartite graph
            else if (color[neighbor] == color[curr]) {
                return false;
            }
        }
    }

    // if we were able to color all vertices without violating the condition, return true
    return true;
}

int main(){
    int N, M; 
    cin >> N >> M;

    for(int i = 0; i < M; i++){
        int v1, v2; 
        cin >> v1 >> v2; 
        g[v1][v2] = 1; 
        g[v2][v1] = 1;
    }

    int counter = 0;
    // build the graph using adjacency list or matrix
    for (int u = 1; u <= N; u++) {
        for (int v = u+1; v <= N; v++) {  // iterate through pairs where u < v
            if (g[u][v]) {  // check if there is no edge between u and v
                if (adding_edge_creates_bipartite_graph(u, v, g)) {  // check if adding an edge between u and v would result in a bipartite graph
                    counter++;
                }
            }
        }
    }
    
    cout << counter; 

    return 0;
}