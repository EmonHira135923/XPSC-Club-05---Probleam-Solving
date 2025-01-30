#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr);
#include<string.h>
#include<string>
using namespace std;
void solve()
{
    int n,k;
    cin >> n >> k;
 
    string s;
    cin >> s;
 
    int ans = 0;
    for(int i=0;i*2+1<=k;i++)
    {
        map<char,int> q;
        int tem = 0;
        for(int j=i;j<n;j+=k)
        {
            q[s[j]]++;
            tem = max(tem,q[s[j]]);
        }
 
        if(2*i+1==k)
        {
            ans+=n/k-tem;
            continue;
        }
 
        for(int j=k-i-1;j<n;j+=k)
        {
            q[s[j]]++;
            tem = max(tem,q[s[j]]);
        }
        ans += 2*n / k-tem;
    }
 
    cout << ans << endl;

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