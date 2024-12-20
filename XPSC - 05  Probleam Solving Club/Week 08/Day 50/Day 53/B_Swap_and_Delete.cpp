#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;


void solve() 
{
    string word;
    cin >> word;
    int zero = 0, cnt = 0;
    for(int i=0;i<word.size();i++)
    {
        if(word[i]=='0') zero++;
        else cnt++;
    }
    if(word.size()==1) cout << "1" << endl;
    else if(zero == cnt) cout<<0<<endl;
    else
    {
        int dif = abs(zero-cnt);
        if(zero>cnt) zero -= dif;
        else cnt -= dif;
        string t;
        for(int i=0;i<word.size();i++)
        {
            if(word[i]=='0' && cnt!=0)
            {
                t.push_back('1');
                cnt--;
            }
            else if(word[i]=='1' && zero!=0)
            {
                t.push_back('0');
                zero--;
            }
            else break;
        }
        dif += zero;
        dif += cnt;
        cout << dif << endl;
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