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
    int p[n+1],s[n+1]={0};
    p[1] = -1;
    for (int i = 2; i <= n; i++) 
    {
        cin >> p[i];
    }
    for (int i = 1; i <= n; i++) 
    {
        char c;cin >> c;
        s[i] = c == 'W' ? 1 : -1;
    }
    for (int i = n ; i > 1; i--) 
    {
        s[p[i]] += s[i];
    }
    cout << count(s+1, s+n+1, 0) << endl;


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