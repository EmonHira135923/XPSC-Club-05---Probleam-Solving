#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s,t;
    cin >> s >> t;

    int cnt_word = 0;

    for(int i=0;i<s.length();i++)
    {
        if(s[i]!=t[i])
        {
            cnt_word++;
        }
    }
    cout << cnt_word << endl;

    return 0;
}