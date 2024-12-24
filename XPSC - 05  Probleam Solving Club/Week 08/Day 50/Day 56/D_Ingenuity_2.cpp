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
    string s;
    cin >> s;
    vector<int> nor,sou,est,wst;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='N') nor.push_back(i);
        if(s[i]=='S') sou.push_back(i);
        if(s[i]=='E') est.push_back(i);
        if(s[i]=='W') wst.push_back(i);
    }
    vector<char> ans(n);
    int i = 0;
    for(i=0;i<min(nor.size(),sou.size());i++)
    {
        if(i%2==0)
        {
            ans[nor[i]]='R';
            ans[sou[i]]='R';
        }
        else
        {
            ans[nor[i]]='H';
            ans[sou[i]]='H';
        }
    }
    for(;i<max(nor.size(),sou.size());i+=2)
    {
        if(i<nor.size())
        {
            if(i+1==nor.size())
            {
                cout<<"NO"<<endl;
                return;
            }
            ans[nor[i]]='R';
            ans[nor[i+1]]='H';
        }
        else if(i<sou.size())
        {
            if(i+1==sou.size())
            {
                cout<<"NO"<<endl;
                return;
            }
            ans[sou[i]]='R';
            ans[sou[i+1]]='H';
        }
    }
    i=0;
    for(i=0;i<min(est.size(),wst.size());i++)
    {
        if(i%2!=0)
        {
            ans[est[i]]='R';
            ans[wst[i]]='R';
        }
        else
        {
            ans[est[i]]='H';
            ans[wst[i]]='H';
        }
    }
    for(;i<max(est.size(),wst.size());i+=2)
    {
        if(i<est.size())
        {
            if(i+1==est.size())
            {
                cout<<"NO"<<endl;
                return;
            }
            ans[est[i]]='R';
            ans[est[i+1]]='H';
        }
        else if(i<wst.size())
        {
            if(i+1==wst.size())
            {
                cout<<"NO"<<endl;
                return;
            }
            ans[wst[i]]='R';
            ans[wst[i+1]]='H';
        }
    }
    int cntR=0,cntH=0;
    for(auto c:ans)
    {
        if(c=='R') cntR++;
        else cntH++;
    }
    if(cntR==0 || cntH==0)
    {
        cout<<"NO"<<endl;
        return;
    }
    
    for(auto c:ans)
    {
        cout << c;
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