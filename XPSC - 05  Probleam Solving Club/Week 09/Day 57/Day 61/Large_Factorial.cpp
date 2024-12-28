#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;
const int Mod = 1e9+7;

void solve() 
{
    int a;
    cin >> a;

    int ans = 1;

    for(int i=1;i<=a;i++)
    {
        ans = (1LL * ans%Mod * i%Mod) % Mod;
    }

    cout << ans << endl;
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