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
int main()
{

    FASTIO;

    int N;
    cin >> N;

    map<int,int> mp;
    for(int i=1;i<=N;i++)
    {
        int l,r;
        cin >> l >> r;

        mp[l]++;
        mp[r+1]--;
    }

    int cnt =  0;
    int mx_value = 0;

    for(auto [sum,val]:mp)
    {
        cnt += val;
        if(cnt > mx_value)
        {
            mx_value = cnt;
        }
    }

    cout << mx_value << endl;

    return 0;
}