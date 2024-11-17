#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;

void solve()
{
    int x,y;
    cin >> x >> y;

    int sum = x-y;

    if(sum>=18) cout << "RCB" << endl;
    else cout << "CSK" << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();

    return 0;
}