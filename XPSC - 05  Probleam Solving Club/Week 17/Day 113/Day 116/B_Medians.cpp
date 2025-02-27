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

    int n, k;
    cin >> n >> k;

    if (n == 1 && k == 1) 
        cout << "1\n1\n";
    else if (k == 1 || k >= n) 
        cout << "-1\n";
    else 
    {
        if ((k - 1) % 2 == 1) 
            cout << "3\n1 " << k << " " << k + 1 << endl;
        else 
            cout << "5\n1 " << k - 1 << " " << k << " " << k + 1 << " " << k + 2 << endl;
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