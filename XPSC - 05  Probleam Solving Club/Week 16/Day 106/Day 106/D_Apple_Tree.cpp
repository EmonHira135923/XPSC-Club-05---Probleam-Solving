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
const int N=200010,M=N*2;
typedef long long LL;
int h[N],e[M],ne[M],idx;
LL cnt[N];
void add(int a,int b)
{
	e[idx] = b,ne[idx] = h[a],h[a] = idx++;
}
void dfs(int u,int fa)
{
	cnt[u] = 0;
	int sum = 0;
	for(int i = h[u];i != -1;i = ne[i])
    {
		int j = e[i];
		if(j == fa)continue;
		sum++;
		dfs(j,u);
		cnt[u] += cnt[j];
	}
	if(!sum) cnt[u] = 1;
}
void solve()
{
	int n,q;
	cin >> n;
	for(int i=1;i<=n;i++) h[i]= -1;
	idx = 0;
	for(int i=1;i<n;i++)
    {
		int a,b;
		cin >> a >> b;
		add(a,b),add(b,a);
	}
	dfs(1,-1);
	cin >> q;
	while(q--)
    {
		int a,b;
		cin >> a >> b;
		cout << cnt[a]* cnt[b] << endl;
	}
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