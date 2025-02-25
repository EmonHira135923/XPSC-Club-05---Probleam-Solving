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

    vector<int> value(N);
    for(int i=0;i<N;i++) cin >> value[i];

    int l,r;
    l = 0,r = 0;


    for(int i=0;i<N;i++)
    {
        if(value[i] == value[0]) l++;
        if(value[i] == value[N-1] && l>=K) r++;
    }

    if(r>=K ||( value[0] == value[N-1] && l>=K)) cout << "YES" << endl;
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