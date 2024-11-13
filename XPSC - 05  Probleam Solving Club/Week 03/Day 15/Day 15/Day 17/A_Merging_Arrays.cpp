#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;
void solve()
{
        int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m), result;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
    
    int i = 0, j = 0;
    while (i < n && j < m) 
    {
        if (a[i] <= b[j]) 
        {
            result.push_back(a[i]);
            i++;
        } 
        else 
        {
            result.push_back(b[j]);
            j++;
        }
    }
    while (i < n) 
    {
        result.push_back(a[i]);
        i++;
    }
    while (j < m) 
    {
        result.push_back(b[j]);
        j++;
    }
    for (int x : result) cout << x << " ";
    cout << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();

    return 0;
}