#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> adj[n + 1];
        int inDegree[n + 1] = {0};
        for (int i = 0; i < n - 1; i++) {
            int u, v;
            cin >> u >> v;
            inDegree[v]++;
            adj[u].push_back(v);
        }
        queue<int> q;
        for (int i = 1; i <= n; i++) {
            if (inDegree[i] == 0) q.push(i);
        }
        vector<int> topo(n);
        int i = 0;
        while (!q.empty()) {
            for(int j = i; j+q.size()-1 < n; j++) topo[j]++; 
            int node = q.front();
            q.pop();
            i++;
            for (auto it : adj[node]) {
                inDegree[it]--;
                if (inDegree[it] == 0) q.push(it);
            }
        }
        for (int i = 0; i < n; i++) cout << topo[i] << " ";
        cout << endl;
    }
    return 0;
}
