#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr);
#include<string.h>
#include<string>
using namespace std;

void solve()
{

    int n;
    cin >> n;
    int k=0, a[2010] = {0};
    for(int i=1;i<=n;i++)
    {
        
        cin>>a[i];
        k^=a[i];
    }
    if(!k) cout << "YES" << endl;
    else
    {
        int cnt=0, m=0;
        for(int i=1;i<=n;i++)
        {
            m^=a[i];
            if(m==k)
            {
                cnt++;
                m=0;
            }
        }
        if(cnt>=3 && cnt%2==1) cout<<"YES" << endl;
        else cout << "NO" << endl;
    }

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