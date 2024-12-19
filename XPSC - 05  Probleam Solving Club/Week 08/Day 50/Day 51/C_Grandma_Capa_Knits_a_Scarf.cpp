#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;

void solve() 
{
    int n;
    string s;
    cin >> n >> s;
    int ans = INT_MAX;
    for(char c='a';c<='z';c++)
    {
        int i=0,j=n-1;
        int cnt=0;
        while(i<j)
        {
            if(s[i]==s[j])
            {
                i++;
                j--;
                continue;
            }
            if(s[i]!=s[j])
            {
                if(s[i]==c)
                {
                    i++;
                    cnt++;
                }
                else if(s[j]==c)
                {
                    j--;
                    cnt++;
                }
                else
                {
                    cnt=INT_MAX;
                    break;
                }
            }
            
        }
        ans = min(cnt,ans);
    }
    if(ans == INT_MAX) cout << -1 << endl;
    else cout << ans << endl;
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