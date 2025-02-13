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

    int n,k;
    string x;
    cin >> n >> k >> x;

    int i = 0,y = 0,z = 0, l = 0;

    for(int i=0;i<n;i++) y += (x[i]=='B');

    char c = 'B';
    
    while(y != k)
    {
        if(y<k && x[i]=='A') y++,c = 'B';
        if(y>k && x[i]=='B') y--,c = 'A';
        i++;
    }
    if(i) cout << 1 << endl << i << " " << c << endl;
    else cout << 0 << endl;

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