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

    int n,m,k;
    cin >> n >> m >> k;
    ll a[n+1],b[m+1],sum = 0;
    for(int i=1;i<=n;i++) 
        cin>>a[i];

    for(int i=1;i<=m;i++) 
        cin>>b[i];

    sort(a+1,a+1+n);
    sort(b+1,b+1+m);

    if(a[1]<b[m])
    {
        swap(a[1],b[m]);
        sort(a+1,a+1+n);
        sort(b+1,b+1+m);
    }

    if(k%2==0)
    {
        if(b[1]<a[n])
            swap(b[1],a[n]);
    }

    for(int i=1;i<=n;i++) 
        sum+=a[i];
    cout << sum << endl;    

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