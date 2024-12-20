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
    vector<int> value(n);
    for(int i=0;i<n;i++) cin >> value[i];
    if(value[n-1]==1) cout << "NO" << endl;
    else
    {
        cout << "YES" << endl;
        vector<int> ans;
        for(int i=n-1;i>=0;i--)
        {
            if(value[i]==0)
            {
                if(i==0 || value[i-1]==0)
                { 
                    ans.push_back(0);
                }
                else
                {
                    if(value[i-1]==1)
                    {
                        int j = i-1;
                        int cnt = 0;
                        int nxt;
                        while(j>=0 && value[j]==1)
                        {
                            cnt++;
                            j--;
                        }
                        nxt = j;
                        int tmp = cnt;
                        while(cnt--) ans.push_back(0);
                        ans.push_back(tmp);
                        i = nxt+1; 
                    }
                }
            }
            
        }
        for(int x:ans) cout << x << " ";
        cout<<endl;
    }
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