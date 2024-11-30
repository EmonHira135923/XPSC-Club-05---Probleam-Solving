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
    string s;
    cin >> s;
    int cnt = 0;
    int l=0,r=0;
    while(r<n)
    {
        if(s[r]=='1')
        {
            r += (k+1);
            l = r;
        }
        else if(r-l==k)
        {
            cnt++;
            r++;
            l = r;
        }
        else if(s[r]=='0')
        {
            r++;
            if(r == n) cnt++;
        }
    }
    cout<<cnt<<endl;
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