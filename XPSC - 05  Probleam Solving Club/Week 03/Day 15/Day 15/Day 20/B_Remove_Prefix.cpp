#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }

    set<int> seen;
    int moves = 0;

    for (int i = n - 1; i >= 0; i--) 
    {
        if (seen.count(a[i]))
        {
            break; 
        }
        seen.insert(a[i]);
        moves++;
    }
    
    cout << n - moves << endl;
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