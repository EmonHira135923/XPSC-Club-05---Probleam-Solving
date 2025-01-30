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

   int N;
   cin >> N;

   vector<int> value(N);
   for(int i=0;i<N;i++) cin >> value[i];

   ll ans = 0;
   pbds<int> mp;
   for(int i=N-1;i>=0;i--)
   {
     ans += mp.order_of_key(value[i]);
     mp.insert(value[i]);
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