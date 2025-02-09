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
    int n,k,even = 0;
    cin >> n >> k;
    int ans = k;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        if(x%2==0) even++;
        if(x%k==0) ans = 0;
        ans = min(ans,k - x%k);
    }
    if(k==4)
    {
        if(even >= 2) ans = 0;
        else if(even == 1) ans = min(ans,1);
        else ans = min(ans,2);
    }
 
    cout << ans << endl;

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