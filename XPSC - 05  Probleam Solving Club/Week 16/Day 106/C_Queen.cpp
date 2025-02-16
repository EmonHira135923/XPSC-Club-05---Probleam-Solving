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

    int n, root = -1; 
    cin >> n;
    vector<int> c(n+1),p(n+1);
    vector<vector<int>> graph(n+1);
    for(int i=1;i<=n;i++)
    {
        cin >> p[i] >> c[i];
        if(p[i]==-1) root = i;
        else graph[p[i]].push_back(i);
    }
    vector<int> del(n+1,1);
    del[root]=0;
    for(int i=1;i<=n;i++)
    {
        if(p[i] == -1) continue;
        if(c[i] == 0)
        {
            del[p[i]] = 0; 
            del[i] = 0;
        }
    }
    int f = 0;
    for(int i=1;i<=n;++i)
    {
        if(del[i]) 
        {
            f = 1;
            cout << i << " ";
        }
    }
    if(!f) cout << "-1" << endl;
}
int main()
{

    FASTIO;

    solve();

    return 0;
}