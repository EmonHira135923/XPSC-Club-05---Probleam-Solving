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
	int l = 1, r = 1e9;
	vector<int> v;
	for(int i=0;i<n;i++) 
    {
		int a,x; 
        cin >> a >> x;
		if(a == 1)
        {
			l=max(l, x);
		} 
        else if(a==2) 
        {
			r=min(r,x);
		} 
        else 
        {
			v.push_back(x);
		}
	}
	int ans = r-l+1;
	for(auto e : v)
    {
        if(e >= l && e <= r) ans--;
    }

	cout << max(0,ans) << endl;

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