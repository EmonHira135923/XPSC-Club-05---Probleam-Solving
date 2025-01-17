#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr);
#include<string.h>
#include<string>
using namespace std;

void solve()
{
	int a, b, l;
    
	set<int> s;
	cin >> a >> b >> l;
	
	for(int i = 1; l%i == 0; i *= a)
    {
        for(int j = 1; l/i%j == 0; j *= b)
        {
            s.insert(l/i/j);
        }
    }

	cout << s.size() << endl;
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