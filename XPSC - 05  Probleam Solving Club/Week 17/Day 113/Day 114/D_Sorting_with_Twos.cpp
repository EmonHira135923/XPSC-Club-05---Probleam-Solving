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

    int N;
    cin >> N;

    vector<int> value(N);
    for(int i=0;i<N;i++)
    {
        cin >> value[i];
    }

    bool flag = true;

    for(int i=1;i<N;i++)
    {
        if(i&(i-1))
        {
            if(value[i-1]>value[i])
            {
                flag = false;
            }
        }
    }

    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;

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