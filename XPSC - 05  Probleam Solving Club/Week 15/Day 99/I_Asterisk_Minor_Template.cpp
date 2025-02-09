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

    string a,b;
    cin >> a >> b;

    string tmp = "";

    if(a[0]==b[0]) tmp = tmp + a[0] + "*";
    else {
        if(a[a.size()-1] == b[b.size()-1]) tmp = tmp + "*" + a[a.size()-1];
        else 
        {
            for(int i=0;i<a.size()-1;i++)
            {
                string x = "";
                x = x + a[i] + a[i+1];
                if(b.find(x)<b.size()-1) 
                {
                    tmp = tmp + "*" + x + "*";
                    break;
                }
            }
        }
    }
    if(tmp.size()==0) cout << "NO";
    else cout<< "YES \n" << tmp ;
    cout<<endl;

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