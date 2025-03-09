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
    int n;
    cin >> n;
    vector<vector<int>> value( n+10,vector<int>(5,0)); 
    for(int i=1;i<=n;i++)
    {
        int x,y;
        cin >> x >> y;
        value[x][y] = 1;
    }
    int ans = 0;
    for(int i=0;i<=n;i++)
    {
        if(value[i][1] && value[i][0]) ans+=n-2; 
        if(value[i][1] && value[i+1][0] && value[i+2][1]) ans++; 
        if(value[i][0] && value[i+1][1] && value[i+2][0]) ans++;   
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