#include<bits/stdc++.h>

using namespace std;

const int INF = numeric_limits<int>::max();

// define a weighted graph using an adjacency matrix
typedef vector<vector<int>> Graph;

// find the nearest unvisited neighbor of the current vertex
int nearest_neighbor(int v, const Graph& graph, vector<bool>& visited) {
    int n = graph.size();
    int w = -1;
    int min_cost = INF;
    for (int u = 0; u < n; u++) {
        if (!visited[u] && graph[v][u] < min_cost) {
            w = u;
            min_cost = graph[v][u];
        }
    }
    return w;
}

// construct a Hamiltonian cycle using the nearest neighbor heuristic
vector<int> nearest_neighbor_tsp(const Graph& graph) {
    int n = graph.size();
    vector<bool> visited(n, false);
    vector<int> path = {0}; // start with vertex 0
    visited[0] = true;
    for (int i = 1; i < n; i++) {
        int v = path.back();
        int w = nearest_neighbor(v, graph, visited);
        path.push_back(w);
        visited[w] = true;
    }
    // connect the last vertex with the first vertex to form a cycle
    path.push_back(0);
    return path;
}

int main() {
    // Open the file for reading
    ifstream inputFile("input.txt");
    if (!inputFile.is_open()) {
        cerr << "Error: could not open input file\n";
        return 1;
    }

    // Read the contents of the file
    string line;
    Graph graph;
    while (getline(inputFile, line)) {
        vector<int> row;
        istringstream iss(line);
        string token;
        while (getline(iss, token, ',')) {
            row.push_back(stoi(token));
        }
        graph.push_back(row);
    }

    // find a Hamiltonian cycle using the nearest neighbor heuristic
    vector<int> path = nearest_neighbor_tsp(graph);

    int n = path.size();
    int cost = 0;
    cout << "Nearest Neighbor Path: " << endl;
    for (int i = 0; i < n - 1; i++) {
        int u = path[i];
        int v = path[(i + 1) % n];
        cout << u + 1 << " -> ";
        cost += graph[u][v];
    }
    cout << path[n - 1] + 1;
    cost += graph[path[n - 1]][path[0]];
    cout << endl;

    cout << "Total cost: " << cost << endl;
    return 0;
}
