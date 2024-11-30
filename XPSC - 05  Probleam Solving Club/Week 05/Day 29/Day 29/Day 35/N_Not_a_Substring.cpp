#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;


void solve() 
{
    string s;
    cin >> s;
    int len = s.size();
    if(s=="()")
    {
        cout<<"NO"<<endl;
    }
    else
    {
        bool flag=false;
        for(int i=0;i<len-1;i++)
        {
            if((s[i]=='(' && s[i+1]=='(') || (s[i]==')' && s[i+1]==')')) flag=true;
        }
        string reg;
        if(flag)
        {
            for(int i=0;i<len;i++)
            {
                reg.push_back('(');
                reg.push_back(')');
            }
        }
        else
        {
            for(int i=0;i<len;i++)
            {
                reg.push_back('(');
            }
            for(int i=0;i<len;i++)
            {
                reg.push_back(')');
            }
        }
        cout<<"YES"<<endl<<reg<<endl;
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