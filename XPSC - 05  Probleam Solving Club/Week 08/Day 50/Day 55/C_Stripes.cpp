#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;


void solve() 
{
    char word[8][8];
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            cin >> word[i][j];
        }
    }
    char ans = '.';
    for(int i=0;i<8;i++)
    {
        int cnt=0;
        for(int j=0;j<8;j++)
        {
            if(word[i][j]=='R') cnt++;
        }
        if(cnt==8)
        {
            ans='R';
            break;
        }
    }
    if(ans=='.')
    {
        for(int j=7;j>=0;j--)
        {
            int cnt=0;
            for(int i=0;i<8;i++)
            {
                if(word[i][j]=='B') cnt++;
            }
            if(cnt==8)
            {
                ans='B';
                break;
            }
        }
    }
    cout << ans << endl;
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