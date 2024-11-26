#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;

    int x1 = (a ^ 0) + (b ^ 0);

    int x2 = (a ^ a) + (b ^ a);

    int x3 = (a ^ b) + (b ^ b); 

    cout << min({x1, x2, x3}) << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}