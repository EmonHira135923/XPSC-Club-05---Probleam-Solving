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
const int N = 7 << 15;
int n, x, u, v;
vector<int> g[N];
void dfs(int v, int k, int p = 0) 
{
    x += k;
    for (int &j : g[v]) 
    {
        if (j != p) 
        {
            dfs(j, k ^ 1, v);
        }
    }
}

int main() 
{
    cin >> n;
    while (cin >> u >> v) 
    {
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1, 0);
    cout << --x * 1LL * (n - x - 2);
    return 0;
}