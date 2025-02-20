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

int a, b, t = 0;
vector<int> A, adj[100001];
void bfs() 
{
    queue<pair<int, int>> q;
    q.push({1, 0});

    while (!q.empty()) 
    {
        auto [m, p] = q.front();
        q.pop();
        
        p = (p + 1) * A[m];
        if (p > b) continue;

        if (adj[m].empty()) t++;

        for (int i : adj[m])
        {
            q.push({i, p});
            adj[i].erase(remove(adj[i].begin(), adj[i].end(), m), adj[i].end());
        }
    }
}

int main() 
{
    cin >> a >> b;
    A.resize(a + 1);
    
    for (int i = 1; i <= a; i++) 
    {
        cin >> A[i];
    }

    for (int i = 1, c, d; i < a; i++) 
    {
        cin >> c >> d;
        adj[c].push_back(d);
        adj[d].push_back(c);
    }

    bfs();
    cout << t << endl;
    
    return 0;
}