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
    string s,t;
    cin >> s >> t;
    if(s==t || s[0]=='1') cout << "YES" << endl;
    else
    {
        int pos=-1;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                pos=i;
                break;
            }
        }
        int mis=-1;
        for(int i=0;i<n;i++)
        {
            if(s[i]!=t[i])
            {
                mis=i;
                break;
            }
        }
        if(pos==-1 || mis<pos) cout << "NO" << endl;
        else cout << "YES" << endl;
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