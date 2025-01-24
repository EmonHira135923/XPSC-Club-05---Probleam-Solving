#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr);
#include<string.h>
#include<string>
using namespace std;

void solve()
{
    int n;
	cin >> n;
	vector<int> v(n);

	for(int i=0;i<n;i++)
    {
	    cin >> v[i];
	}

	int mx = 0;

	for(int i=1;i<n;i++)
    {
	    mx = max(mx,v[i-1]-v[i]);
	    mx = max(mx,v[i]-v[0]);
	    mx = max(mx,v[n-1]-v[i-1]);
	}

	cout << mx << endl;

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