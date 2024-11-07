#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    string s;
    cin>>n>>k>>s;
    map<char,int> mp;
    for(auto val:s)
    {
        mp[val]++;
    }
    int count=0;
    for(auto val:mp)
    {
        if(val.second%2==1)
        {
            count++;
        }
    }
    if(count<=(k+1)) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}