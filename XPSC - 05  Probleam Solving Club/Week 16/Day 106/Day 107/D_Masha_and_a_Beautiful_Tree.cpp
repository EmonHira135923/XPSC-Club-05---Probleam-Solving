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
    int m;
    cin >> m;
    int a[m];
    for(int&i:a)cin >> i;
    bool inv = 0; 
    int cnt = 0;
    for(int k = 1;k < m;k <<= 1)
    for(int i = 0;i < m;i += 2*k)
    {
        if(abs(a[i]-a[i+k])!=k) inv = 1;
        if(a[i]>a[i+k])
        {
            swap(a[i],a[i+k]);
            cnt++;
        }
    }
    cout << (inv?-1:cnt) << endl;
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