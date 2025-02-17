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

    ll n;
    cin >> n;
    ll ax,ay,bx,by,cx,cy;
    cin >> ax >> ay >> bx >> by >> cx >> cy;
 
    if((bx-ax)*(cx-ax)<0) cout << "NO" << endl;
    else if((by-ay)*(cy-ay)<0) cout << "NO" << endl;
    else cout << "YES" << endl;
    
}
int main()
{

    FASTIO;

    solve();

    return 0;
}