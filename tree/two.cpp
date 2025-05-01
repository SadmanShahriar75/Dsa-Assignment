#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> adj;
int maxHeight = 0;

void dfs(int node, int height) {
    maxHeight = max(maxHeight, height);
    for (int child : adj[node]) {
        dfs(child, height + 1);
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> parent(n);
    adj.resize(n);
    int root = -1;

    for (int i = 0; i < n; i++) {
        cin >> parent[i];
        if (parent[i] == -1) {
            root = i;
        } else {
            adj[parent[i]].push_back(i);
        }
    }

    dfs(root, 1);  
    cout << maxHeight << endl;

    return 0;
}
