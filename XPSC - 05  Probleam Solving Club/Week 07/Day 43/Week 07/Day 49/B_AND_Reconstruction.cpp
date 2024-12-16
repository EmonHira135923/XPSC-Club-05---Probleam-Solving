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
    vector<int> v(n-1);
    for(int i=0;i<n-1;i++)
    {
        cin>>v[i];
    }
        vector<int> ans(n);
        for(int i=1;i<n-1;i++)
        {
            ans[i] = (v[i-1]|v[i]);
        }
        if(n>2)
        {
            ans[0] = v[0];  
            ans[n-1] = v[n-2];
        }
        if(n==2)
        {
            cout << v[0] << " " << v[0] << endl;
            return;
        }
        bool flag = true;
        for(int i=0;i<n-1;i++)
        {
            if((ans[i]&ans[i+1])!=v[i]) flag = false;
        }
        if(flag)
        {
            for(int x:ans)
            {
                cout << x << " ";
            }
            cout << endl;
        }
        else cout << -1 << endl;
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