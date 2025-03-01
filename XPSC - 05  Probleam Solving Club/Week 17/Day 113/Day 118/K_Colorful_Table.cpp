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
    int arr[n];
    map<int, bool> seen;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        seen[arr[i]] = true;
    }
    int l = 0;
    int r = n-1;
    for (int i = 1; i <= k; i++)
    {
        if (seen[i])
        {
            for (int j = l; j < n; j++)
            {
                if (arr[j] >= i)
                {
                    l = j;
                    break;
                }
            }
            for (int j = r; j >= 0; j--)
            {
                if (arr[j] >= i)
                {
                    r = j;
                    break;
                }
            }
            cout << (r-l+1) * 2 << " ";
        }
        else
        {
            cout << 0 << " ";
        }
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