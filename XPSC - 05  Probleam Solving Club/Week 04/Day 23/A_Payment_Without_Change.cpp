#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;

void solve() 
{

    int  a, b, n, S;
    cin >> a >> b >> n >> S;

    int  max_coin = min(S / n, a);
    int  remainder = S - max_coin * n;


    if (remainder <= b) 
    {
        cout << "YES" << endl;
    } else 
    {
        cout << "NO" << endl;
    }

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