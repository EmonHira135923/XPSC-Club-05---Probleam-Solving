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

    string s; 
    cin >> s;
    int ans = INT_MAX;
    for(char i = 'a'; i <= 'z'; i++)
    {
        int l = 0;
        int t = 0;
        for(int j=0; j<s.size(); j++)
        {
            if(s[j] == i)
            {
                t = max(t, (int)log2(l)+1);
                l = 0;
            } 
            else l++;
        }
        t = max(t,(int)log2(l)+1);
        ans = min(ans, t);
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