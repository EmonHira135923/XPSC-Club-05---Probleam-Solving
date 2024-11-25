#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    if (m < n) 
    {
        cout << "No\n";
    } 
    else 
    {
        cout << "Yes\n";
        int x = m / n;
        int remainder = m % n;

        for (int i = 0; i < n - remainder; i++) 
        {
            cout << x << " ";
        }

        for (int i = 0; i < remainder; i++) 
        {
            cout << x + 1 << " ";
        }

        cout << endl;
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
