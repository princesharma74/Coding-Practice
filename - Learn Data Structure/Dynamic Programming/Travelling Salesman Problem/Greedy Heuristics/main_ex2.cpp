#include<bits/stdc++.h>

using namespace std;

// define a weighted graph using an adjacency matrix
typedef vector<vector<int>> Graph;

// Function to compute the cost of the given path
int costOfPath(const vector<int>& path, const Graph& graph) {
    int n = path.size();
    int cost = 0;
    for (int i = 0; i < n; i++) {
        cost += graph[path[i]][path[(i + 1) % n]];
    }
    return cost;
}

// Function to perform the greedy heuristic for the ATSP
vector<int> greedyHeuristic(const Graph& graph) {
    int n = graph.size();
    vector<int> path(n);
    vector<bool> visited(n, false);

    // Start with vertex 0 and mark it as visited
    path[0] = 0;
    visited[0] = true;

    // Construct the remaining path by choosing the unvisited
    // vertex with the smallest cost to the last vertex in the path
    for (int i = 1; i < n; i++) {
        int lastVertex = path[i - 1];
        int minCost = numeric_limits<int>::max();
        int minVertex = -1;

        for (int j = 0; j < n; j++) {
            if (!visited[j] && graph[lastVertex][j] < minCost) {
                minCost = graph[lastVertex][j];
                minVertex = j;
            }
        }

        path[i] = minVertex;
        visited[minVertex] = true;
    }

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

    // Compute the optimal path using the greedy heuristic
    vector<int> path = greedyHeuristic(graph);

    // Print the optimal path
    cout << "Greedy heuristic path: ";
    for (int i = 0; i < path.size()-1; i++) {
        cout << path[i] + 1 << " -> ";
    }
    cout << path[path.size()-1] + 1 << endl;

    // Compute the cost of the path and return it
    int cost = costOfPath(path, graph);
    cout << "Greedy heuristic cost: " << cost << endl;
    return 0;
}
