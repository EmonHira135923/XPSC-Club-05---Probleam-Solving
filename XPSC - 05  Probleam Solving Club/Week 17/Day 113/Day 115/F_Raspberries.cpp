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

    int cnt_1 = 0,cnt_2 = 0;

    for(int i=0;i<value.size();i++)
    {
        if(value[i]%K==0) cnt_1 = K;
        else cnt_1 = max(cnt_1,value[i]%K);

        if(K==4 && value[i]%2==0 && cnt_2 < 2) cnt_2++;
    }

    if(K==4) cout << min(2-cnt_2,K-cnt_1) << endl;
    else cout << K-cnt_1 << endl;

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