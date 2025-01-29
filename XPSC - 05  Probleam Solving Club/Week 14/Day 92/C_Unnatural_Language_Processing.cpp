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
    string str;
    cin >> str;
    for(ll i=0;i<n;i++)
    {
        cout << str[i];
        if((str[i+2]=='a' || str[i+2]=='e') && (i+2<=n)) cout << ".";     
    }
    cout << endl;

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