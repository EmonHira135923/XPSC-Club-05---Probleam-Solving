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
    vector<ll> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int bits[30]={0};
    for(int i=0;i<30;i++)
    {
        ll num=(1LL<<i);
        for(int j=0;j<n;j++)
        {
            if((v[j]&num)!=0) bits[i]++;
        }
    }
    for(int k=1;k<=n;k++)
    {
        bool flag=true;
        for(int i=0;i<30;i++)
        {
            if(bits[i]%k!=0)
            {
                flag=false;
                break;
            }
        }
        if(flag) cout << k << " ";
    }
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