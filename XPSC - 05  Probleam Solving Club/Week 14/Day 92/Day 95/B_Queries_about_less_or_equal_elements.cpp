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
int main()
{

    FASTIO;

    int N,M;
    cin >> N >> M;

    pbds<int> mp;
    for(int i=1;i<=N;i++)
    {
        int x;
        cin >> x;
        mp.insert(x);
    }    

    for(int i=1;i<=M;i++)
    {
        int x;
        cin >> x;
        cout << mp.order_of_key(x+1) << " ";
    }
    cout << endl;

    return 0;
}