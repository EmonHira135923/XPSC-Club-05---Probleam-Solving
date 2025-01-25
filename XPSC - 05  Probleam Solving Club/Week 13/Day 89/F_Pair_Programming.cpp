#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr);
#include<string.h>
#include<string>
using namespace std;

void solve()
{

    int k, n, m;
    cin >> k >> n >> m;
 
    int a[n + 1], b[m + 1];
    for (int i = 1; i <= n; i++) 
    {
        cin >> a[i];
    }

    for (int i = 1; i <= m; i++) 
    {
        cin >> b[i];
    }
 
    int pa = 1, pb = 1;  
 
    vector<int>ans;
    for (int i = 1; i <= n + m; i++) 
    {
        if (pa <= n && a[pa] <= k) 
        {
            if (a[pa] == 0) 
            {
                k++;
            }
            ans.push_back(a[pa++]);
        }
        else if (pb <= m && b[pb] <= k) 
        {
            if (b[pb] == 0) 
            {
                k++;
            }
            ans.push_back(b[pb++]);
        }
        else 
        {
            cout << -1 << endl; 
            return;
        }
    }
 
    for (auto x : ans)
    {   
        cout << x << " ";
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