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

    ll n; 
    cin >> n;

    ll sum = 0;

    vector<int> a(n),T(n+1);
    for(int i=0;i<n;i++) cin>>a[i];

    for(int i=n-1;i>=0;i--)
    {
        for(int x=a[i];x>0;x -= x&-x) sum += T[x];
        for(int x=a[i];x<=n;x+=x&-x) T[x] += 1;
    }

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
