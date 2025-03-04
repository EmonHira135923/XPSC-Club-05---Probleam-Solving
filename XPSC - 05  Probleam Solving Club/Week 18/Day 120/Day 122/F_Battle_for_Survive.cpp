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

    ll n;
    cin >> n;
 
    vector<ll> v(n);
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
    } 
 
    ll sum=0;
    for(ll i=0;i<n-2;i++)
    {
        sum+=v[i];
    }
 
    v[n-2]-=sum;
    v[n-1]-=v[n-2];
    
    cout<<v[n-1]<<endl;

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