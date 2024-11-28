#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;


void solve() 
{
    int op;
    cin >> op;

    string word;
    cin >> word;

    string val = word;

    reverse(val.begin(),val.end());

    if(word <= val) cout << word << endl;
    else cout << val << word << endl;
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