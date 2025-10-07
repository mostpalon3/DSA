#include <bits/stdc++.h>
using namespace std;

void dfs(int node,vector<vector<int>> &adj, vector<int> &vis, vector<int> &comp){
    vis[node]=1;

    comp.push_back(node);
    for(auto n: adj[node]){
        if(!vis[n]){
            dfs(n,adj,vis,comp);
        }
    }
}
vector<vector<int>> connectedG(int n,vector<vector<int>> &edges){
    vector<vector<int>> adj(n);
    for(auto &e:edges){
        int u = e[0];
        int v = e[1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> vis(n,0);
    vector<vector<int>> res;
    for(int i = 0; i < n;i++){
        if(!vis[i]){
            vector<int> component;
            dfs(i,adj,vis,component);
            res.push_back(component);
        }
    }
    return res;
}

int main() {
    int n = 7; // number of nodes (0 to 6)
    vector<vector<int>> edges = {
        {0, 1}, {1, 2}, {3, 4}, {5, 6}
    };

    vector<vector<int>> components = connectedG(n, edges);

    cout << "Connected Components:\n";
    for (auto &comp : components) {
        cout << "[ ";
        for (int node : comp)
            cout << node << " ";
        cout << "]";
        cout << "\n";
    }

    return 0;
}