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
    vector<int> ar(n);
    
    for(int i=0;i<n;i++)
    {
        cin >> ar[i];
    }
    
    int mn = INT_MAX;
    
    for(int i=0;i<n;i++)
    {
        int mx = INT_MIN;
        if(i>0)
        {
            mx = max(mx,abs(ar[i]- ar[i-1]));
        }
        if(i< n-1)
        {
            mx = max(mx,abs(ar[i]- ar[i+1]));
        }
        mn = min(mn,mx);
    }
    
    cout << mn << endl;
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