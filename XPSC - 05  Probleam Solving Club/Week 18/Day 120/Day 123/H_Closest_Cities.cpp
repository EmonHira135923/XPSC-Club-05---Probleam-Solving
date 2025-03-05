#include<bits/stdc++.h>
#include<string.h>
#include<string>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define endl '\n'
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr);
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve()
{
    int n, m;
    cin >> n;

    vector<int> a(n+1), b(n+1), ans(n+1), sum(n+1);
    for (int i=1;i<=n;i++) cin >> a[i];

    b[1] = 2, b[n] = n - 1;

    for (int i=2;i<n;i++) 
    {
        if (a[i]-a[i-1]<a[i+1]-a[i]) b[i]=i-1;    
        else b[i]=i+1;
            
    }

    ans[1] = 0;
    for (int i=2;i<=n;i++) ans[i]=ans[i-1] + (b[i - 1] == i ? 1 : a[i]-a[i-1]);

    sum[n] = 0;

    for (int i=n-1;i>=1;i--) sum[i] = sum[i+1] + (b[i+1] == i ? 1 : a[i + 1] - a[i]);
        

    cin >> m;
    while (m--) 
    {
        int x, y;
        cin >> x >> y;
        if (x < y) cout << ans[y]-ans[x] << endl;   
        else cout << sum[y]-sum[x] << endl;     
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