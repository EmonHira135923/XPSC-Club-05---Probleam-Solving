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
    int need = 0;
    int matchPairs = 0;
    int i = 0,j = n-1;
    while(i<j)
    {
        if(s[i]!=s[j]) need++;
        else matchPairs += 2;
        i++;
        j--;
    }
    int odd = 0;
    if(n%2==1) odd = 1;
 
    string t;
    for(int k=0;k<=n;k++)
    {
        if(k<need) t.push_back('0');
        else if(k==need) t.push_back('1');
        else
        {
            int rem = k;
            rem -= need;
            if(rem==0)
            {
                t.push_back('1');
                continue;
            }
            if(rem%2==1)
            {
                rem -= odd;
                if(rem==0)
                {
                    t.push_back('1');
                    continue;
                }
            }
            if(matchPairs>=rem && rem%2==0) t.push_back('1');
            else t.push_back('0');
        }
    }
    cout << t << endl;
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