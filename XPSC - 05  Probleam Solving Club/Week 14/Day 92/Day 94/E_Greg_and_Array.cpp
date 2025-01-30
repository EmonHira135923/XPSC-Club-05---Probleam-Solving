#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr);
#include<string.h>
#include<string>
using namespace std;

void solve()
{

    int n,m,k;
	cin >> n >> m >> k;
 
	vector<int> a(n+1),c(n+2),cop(m+2);	
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++) c[i]=a[i]-a[i-1];
 
	vector<array<int,3>> op(m+1);
	for(int i=1;i<=m;i++) cin>>op[i][0]>>op[i][1]>>op[i][2];
	for(int i=1;i<=k;i++)
	{
		int l,r;
		cin >> l >> r;
		cop[l]++;
		cop[r+1]--;
	}
 
	for(int i=1;i<=m;i++) cop[i]+=cop[i-1];
	for(int i=1;i<=m;i++)
	{
		c[op[i][0]] += cop[i]*op[i][2];
		c[op[i][1]+1] -= cop[i]*op[i][2];
	}
 
	for(int i=1;i<=n;i++) c[i] += c[i-1];
	for(int i=1;i<=n;i++) cout << c[i] << " ";

}

int main()
{

    FASTIO;

    solve();


    return 0;
}