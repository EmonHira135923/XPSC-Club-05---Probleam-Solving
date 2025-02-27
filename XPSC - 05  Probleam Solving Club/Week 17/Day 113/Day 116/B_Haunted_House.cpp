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
    string s;
    cin >> n >> s;

    ll sum = 0;
    int j = 0;

    for (int i=n-1;i>=0;i--) 
    {
        if (s[i]=='0') 
        {
            j++;
            sum += (n-i-j);
            cout << sum << " ";
        }
    }

    for (j++;j<=n;j++) 
    {
        cout << -1 << " ";
    }
    cout << endl;

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