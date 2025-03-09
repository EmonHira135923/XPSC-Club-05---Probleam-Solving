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
    int n;
    cin >> n;
    vector<int> value[103];
    for(int i=0;i<n;i++)
    {
        value[i].push_back(i+1);
    }
    for(int i=0;i<n;i++)
    {
        string a;
        cin >> a;
        for(int j=0;j<n;j++)
        {
            if(a[j]=='1')
            {
                for(auto x:value[i])
                {
                    if(find(value[j].begin(),value[j].end(),x)==value[j].end())
                    {
                        value[j].push_back(x);
                    }
                }
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout << value[i].size() << " ";
        for(auto x:value[i])
        {
            cout << x << " ";
        }
        cout << endl;
    }
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