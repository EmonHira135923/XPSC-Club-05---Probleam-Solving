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
const int N = 1e5 + 10;
int n, ans, f[N];
vector<int> vc[N];
void dfs(int u, int fa) 
{
    f[u] = 1;
    for (int v : vc[u]) 
    {
        if (v == fa) continue;
        dfs(v, u);
        if (f[v] % 2 == 0) f[v] = 0, ans++;
        f[u] += f[v];
    }
}

int main() 
{
    cin >> n;
    if (n & 1) 
    {
        cout << "-1";
        return 0;
    }
    for (int i = 1, u, v; i < n; i++) 
    {
        cin >> u >> v;
        vc[u].push_back(v);
        vc[v].push_back(u);
    }
    dfs(1, -1);
    cout << ans;
    return 0;
}