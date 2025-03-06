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

    int n,d,k;
	cin >> n >> d >> k;
	int a[n+2];
	memset(a,0,sizeof(a));
	for(int i=1,x,y;i<=k;i++)
    {
	  cin >> x >> y;
	  a[max(1,x-d+1)]++;
	  a[y+1]--;
	}
	int p = 1;
	int q = 1;
	for(int i =1;i<=n-d+1;i++)
    {
		a[i] += a[i-1];
		if(a[i]>a[p])
        {
			p = i;
		}
		if(a[i]<a[q])
        {
			q = i;
		}
	}
    
	cout << p << " " << q << endl;

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