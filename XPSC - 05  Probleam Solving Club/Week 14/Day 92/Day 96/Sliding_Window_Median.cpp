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
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
int main()
{

    FASTIO;

    int N,M;
    cin >> N >> M;

    vector<int> value(N);
    for(int i=0;i<N;i++) cin >> value[i];

    int l,r;
    l = 0,r = 0;

    pbds<pair<int,int>> mp;

    while(r<N)
    {
        mp.insert({value[r],r});
        if( r - l + 1 == M)
        {
            int pos = M/2;
            if(M%2==0)
            {
               pos--;    
            } 
            auto it = mp.find_by_order(pos);
            cout << it->first << " ";
            mp.erase({value[l],l});
            l++;
        }
        r++;
    }





    return 0;
}