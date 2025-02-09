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
    int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++) cin >> a[i];
	vector<int> v;
	map<int,int> m;
	for(int i=0;i<n;i++)
    {
		if(m[a[i]%10]<3)
        {
			m[a[i]%10]++;
			v.push_back(a[i]%10);
		}
	}
	n = v.size();
	int flag = 0;
	for(int i=0;i<n;i++)
    {
		for(int j=i+1;j<n;j++)
        {
			for(int k=j+1;k<n;k++)
            {
				if((v[i] + v[j] + v[k]) % 10 == 3)
                {
					flag = 1;
					break;
				}
			}
		}
	}

    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;

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