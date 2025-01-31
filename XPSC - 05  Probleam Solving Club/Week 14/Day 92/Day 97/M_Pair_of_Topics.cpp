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

   	int n;
	cin >> n;

	int a[n], b[n], c[n];

	ll ans = 0;

	for(int i=0;i<n;i++) cin>>a[i];

	for(int i=0;i<n;i++) 
    {
		cin >> b[i];
		c[i] = a[i]-b[i];
	}

	sort(c,c+n);

	for(int i=0;i<n;i++) 
    {
		int k = lower_bound(c, c+n, -c[i]+1)-c;
		k = max(k, i+1);
		ans += n-k;
	}

	cout << ans << endl;

    return 0;
}