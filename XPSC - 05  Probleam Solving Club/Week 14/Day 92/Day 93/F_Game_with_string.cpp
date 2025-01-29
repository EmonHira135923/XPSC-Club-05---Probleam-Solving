#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr);
#include<string.h>
#include<string>
using namespace std;

int main()
{
    FASTIO;

    string s;
    cin >> s;
    int ct = 0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i] == s[i+1])
        {
            s.erase(i,2);
            ct++;
            i = -1;
            
           
        }
    }
    if(ct%2 != 0)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}