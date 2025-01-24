#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr);
#include<string.h>
#include<string>
using namespace std;

void solve()
{

    ll n;
	cin >> n;

	double a[n+5];
    double sum = 0;

	for (int i=0;i<n;i++)
    {
		cin >> a[i];
		sum += a[i];
	}
 
	long long ans = 0;
	map <double, int> st;
    
	for (int i=0;i<n;i++)
    {
		ans += st[2*(double)sum/n-a[i]];
		st[a[i]]++;
	}

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