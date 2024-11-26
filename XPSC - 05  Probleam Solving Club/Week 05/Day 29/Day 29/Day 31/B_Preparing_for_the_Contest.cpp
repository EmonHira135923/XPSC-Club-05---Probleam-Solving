#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;

void solve()
{
    int n,k;
    cin >> n >> k;
    int ar[n];
    for(int i=1;i<=n;i++)
    {
        ar[i-1] = i;
    }
    if(k == 0)
    {
        for(int i=n-1;i>=0;i--)
        {
            cout << ar[i] << " ";
        }
        return;
    }
    
    vector<int> ans;

    priority_queue<int,vector<int>,greater<int>> pr;


    for(int i=n-1;i>=(n-k);i--)
    {
        pr.push(ar[i]);
    }
    
    ans.push_back(ar[0]);
    while(!pr.empty())
    {
        ans.push_back(pr.top());
        pr.pop();
    }
    for(int i=n-k-1;i>=1;i--) ans.push_back(ar[i]);

    for(auto x : ans) cout << x <<" ";
    cout << endl;

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