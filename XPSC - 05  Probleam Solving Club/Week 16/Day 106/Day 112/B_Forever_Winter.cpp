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
    int n, m;
    cin >> n >> m;
    map<int, set<int>> g;
    for (int i = 1;i <= m;i++) 
    {
        int u, v;
        cin >> u >> v;
        g[u].insert(v);
        g[v].insert(u);
    }

    int leaf = -1, parentOfLeaf = -1;
    for (int i = 1;i <= n;i++) 
    {
        if (g[i].size() == 1) 
        {
            leaf = i;
            break;
        }
    }

    int x, y;
    for (int i = 1;i <= n;i++) 
    {
        if (g[i].find(leaf) != g[i].end()) 
        {
            y = g[i].size() - 1;
            parentOfLeaf = i;
            break;
        }
    }

    for (int i = 1;i <= n;i++) 
    {
        if (g[i].find(parentOfLeaf) != g[i].end() && g[i].size() > 1) 
        {
            x = g[i].size();
            break;
        }
    }

    cout << x << " " << y << endl;

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