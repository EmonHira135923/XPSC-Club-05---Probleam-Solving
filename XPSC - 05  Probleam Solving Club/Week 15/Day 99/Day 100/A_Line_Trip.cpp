#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr);
#include<string.h>
#include<string>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve()
{
    int n, x;
    cin >> n >> x;

    vector<int> a(n + 1);

    a[0] = 0;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    int sum = 0;
    
    for(int i = 1; i <= n; i++)
    {
        sum = max(sum,a[i]-a[i-1]);
    }

    sum = max(sum,2*(x-a[n]));

    cout << sum << endl;

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