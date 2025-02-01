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

    ll a[n], x = 0;

    for(int i=0;i<n;i++) cin>>a[i];

    for(int j=0;j<n;j++)
    {
        for(int i=j+1;i<n;i++)
        {
            x += a[i] <= a[j];
        }  
    }


    // for(int i=0;i<n;i++)
    // for(int j=i+1;j<n;j++) x += a[i] <= a[j];

    cout << x << endl;

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