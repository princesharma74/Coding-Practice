#include<bits/stdc++.h>

using namespace std; 

// define a weighted graph using an adjacency matrix
typedef vector<vector<int>> Graph;

vector<int> extended_nearest_neighbor(const Graph& graph) {
    int n = graph.size();

    // Start with an arbitrary vertex as the initial path
    vector<int> path;
    for (int i = 0; i < n; i++) {
        path.push_back(i);
    }

    // Iterate through each vertex to build the path
    for (int i = 1; i < n - 1; i++) {
        int w0 = -1;
        int w = -1;
        int min_w0_cost = numeric_limits<int>::max();
        int min_w_cost = numeric_limits<int>::max();

        // Find the vertex with the smallest cost to v1
        for (int j = i + 1; j < n; j++) {
            if (graph[path[i - 1]][path[j]] < min_w0_cost) {
                w0 = j;
                min_w0_cost = graph[path[i - 1]][path[j]];
            }
        }

        // Find the vertex with the smallest cost from vi
        for (int j = i + 1; j < n; j++) {
            if (graph[path[i]][path[j]] < min_w_cost) {
                w = j;
                min_w_cost = graph[path[i]][path[j]];
            }
        }

        // If appending w has a smaller cost than shifting the path, append w
        if (graph[path[i - 1]][path[w]] + graph[path[w]][path[i + 1]] < min_w0_cost + graph[path[0]][path[i]]) {
            swap(path[i], path[w]);
        }
        // Otherwise, shift the path and add w0 as the new first vertex
        else {
            int first = path[0];
            for (int j = 0; j < i; j++) {
                path[j] = path[j + 1];
            }
            path[i] = w0;
            path[0] = first;
        }
    }

    // Connect the last vertex to the first vertex to complete the cycle
    path.push_back(path[0]);

    return path;
}

int main() {
    // Example usage
    Graph graph = {{0, 10, 15, 20},
                                 {5, 0, 9, 10},
                                 {6, 13, 0, 12},
                                 {8, 8, 9, 0}};

    vector<int> path = extended_nearest_neighbor(graph);
    // Print the result with the minimum cost
    cout << "Extended Nearest Neighour: " << endl;
    int cost = 0;
    for (int i = 0; i < path.size() - 1; i++) {
        cout << path[i] + 1<< " -> ";
        cost += graph[path[i]][path[i + 1]];
    }
    cout << path[path.size() - 1] + 1 << endl;
    cout << "Cost: " << cost << endl;

    return 0;
}
