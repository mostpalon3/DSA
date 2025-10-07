#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int LOGN = 20;

vector<int> adj[MAXN];
int parent[MAXN][LOGN], depth[MAXN];
int G[MAXN];
int N;

void dfs(int u, int p) {
    parent[u][0] = p;
    depth[u] = depth[p] + 1;
    for (int i = 1; i < LOGN; i++)
        parent[u][i] = parent[parent[u][i-1]][i-1];
    for (int v : adj[u])
        if (v != p) dfs(v, u);
}

int lca(int u, int v) {
    if (depth[u] < depth[v]) swap(u, v);
    for (int i = LOGN-1; i >= 0; i--)
        if (depth[u] - (1<<i) >= depth[v])
            u = parent[u][i];
    if (u == v) return u;
    for (int i = LOGN-1; i >= 0; i--)
        if (parent[u][i] != parent[v][i])
            u = parent[u][i], v = parent[v][i];
    return parent[u][0];
}

vector<int> getPath(int u, int v) {
    int ancestor = lca(u, v);
    vector<int> path;
    while (u != ancestor) {
        path.push_back(u);
        u = parent[u][0];
    }
    vector<int> temp;
    while (v != ancestor) {
        temp.push_back(v);
        v = parent[v][0];
    }
    path.push_back(ancestor);
    path.insert(path.end(), temp.rbegin(), temp.rend());
    return path;
}

int maxSubarraySum(vector<int>& nums) {
    int max_sum = nums[0], current_sum = nums[0];
    for (int i = 1; i < nums.size(); i++) {
        current_sum = max(nums[i], current_sum + nums[i]);
        max_sum = max(max_sum, current_sum);
    }
    return max_sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> N;
    for (int i = 0; i < N-1; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    for (int i = 1; i <= N; i++) cin >> G[i];
    
    dfs(1, 0);
    
    int Q;
    cin >> Q;
    while (Q--) {
        int A, B;
        cin >> A >> B;
        vector<int> path = getPath(A, B);
        vector<int> values;
        for (int node : path) values.push_back(G[node]);
        cout << maxSubarraySum(values) << '\n';
    }
    
    return 0;
}