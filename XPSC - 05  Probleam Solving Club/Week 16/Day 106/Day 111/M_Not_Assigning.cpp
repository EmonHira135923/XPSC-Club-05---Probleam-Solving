#include<bits/stdc++.h>
#include<string.h>
#include<string>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define endl '\n'
#define ll long long
#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr);
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> adj(n + 1);
    vector<pair<int, int>> edges;
    vector<int> degree(n + 1, 0);
    
    for (int i = 0; i < n - 1; i++) 
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        edges.push_back({u, v});
        degree[u]++;
        degree[v]++;
    }

    for (int i = 1; i <= n; i++) 
    {
        if (degree[i] >= 3) 
        {
            cout << -1 << '\n';
            return;
        }
    }
    
    int start = 1;
    for (int i = 1; i <= n; i++) 
    {
        if (degree[i] == 1) 
        {
            start = i;
            break;
        }
    }

    vector<int> order;
    vector<bool> visited(n + 1, false);
    queue<int> q;
    q.push(start);
    visited[start] = true;
    
    while (!q.empty()) 
    {
        int node = q.front();
        q.pop();
        order.push_back(node);
        for (int neighbor : adj[node]) 
        {
            if (!visited[neighbor]) 
            {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }

    map<pair<int, int>, int> weight;
    for (int i = 0; i < order.size() - 1; i++) 
    {
        int u = order[i], v = order[i + 1];
        weight[{u, v}] = (i % 2 == 0) ? 2 : 11;
        weight[{v, u}] = weight[{u, v}];
    }
    
    for (auto edge : edges) 
    {
        cout << weight[edge] << " ";
    }
    cout << endl;
}

int main()
{

    FASTIO;
    
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}