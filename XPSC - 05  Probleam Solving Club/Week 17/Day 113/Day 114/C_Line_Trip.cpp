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

    int N,K;
    cin >> N >> K;

    vector<int> result(N);
    for(int i=0;i<N;i++) cin >> result[i];

    int res = result[0];

    for(int i=1;i<N;i++)
    {
        res = max(res,result[i]-result[i-1]);
    }

    res = max(res,2*(K-result[N-1]));

    cout << res << endl;

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