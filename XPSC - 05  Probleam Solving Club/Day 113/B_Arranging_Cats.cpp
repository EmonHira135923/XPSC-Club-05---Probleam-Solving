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

    int N;
    cin >> N;

    string word,Word;
    cin >> word >> Word;

    int result_0 = 0,result_1 = 0;

    for(int i=0;i<N;i++)
    {
        if(word[i]=='0' && Word[i]=='1') result_0++;
        if(Word[i]=='0' && word[i]=='1') result_1++;
    }

    int ans = max(result_0,result_1);

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