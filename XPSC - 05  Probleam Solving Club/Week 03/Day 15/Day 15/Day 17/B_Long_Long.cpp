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
    long long sum = 0;
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
        sum += abs(a[i]);
    }
    int operations = 0;
    bool cheek = false;
    for (int i = 0; i < n; i++) 
    {
        if (a[i] < 0 && !cheek) 
        {
            operations++;
            cheek = true;
        } 
        else if (a[i] > 0) 
        {
            cheek = false;
        }
    }
    cout << sum << " " << operations << endl;
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