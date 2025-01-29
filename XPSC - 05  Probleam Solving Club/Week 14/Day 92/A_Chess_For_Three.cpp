#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr);
#include<string.h>
#include<string>
using namespace std;

void solve()
{

    int a,b,c;
    cin >> a >> b >> c;

    cout << ((a+b+c) % 2 ? -1 : min((a+b+c)/2,a+b)) << endl;
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