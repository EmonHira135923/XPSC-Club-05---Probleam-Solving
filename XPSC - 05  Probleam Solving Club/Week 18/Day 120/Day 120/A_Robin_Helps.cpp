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

    int N,K;
    cin >> N >> K;

    int sum,ans;
    sum = 0,ans = 0;

    for(int i=0;i<N;i++)
    {
        int result;
        cin >> result;

        if(result>=K)
        {
            sum += result;
        }
        else if(result==0 && sum>0)
        {
            sum--;
            ans++;
        }
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