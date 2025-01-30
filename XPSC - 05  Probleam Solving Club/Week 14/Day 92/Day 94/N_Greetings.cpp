#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr);
#include<string.h>
#include<string>
using namespace std;

void solve()
{

    int n;	cin>>n;
    map<int,int> mp;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        int a,b;	cin>>a>>b;
        mp[a]=b;
        v[i]=b;
    }
    sort(v.begin(),v.end());
    long long ans=0;
    for(auto& it:mp){
        auto pos=lower_bound(v.begin(),v.end(),it.second);
        ans+=pos-v.begin();
        v.erase(pos);
    }
    cout<<ans<<endl;

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