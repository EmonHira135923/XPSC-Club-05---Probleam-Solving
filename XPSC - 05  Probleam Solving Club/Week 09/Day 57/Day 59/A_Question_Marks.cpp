#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;


void solve() 
{
    int N;
    cin >> N;

    string word;
    cin >> word;

    int a,b,c,d;
    a=0,b=0,c=0,d=0;

    for(int i=0;i<word.size();i++)
    {
        if(word[i]=='A') a++;
        if(word[i]=='B') b++;
        if(word[i]=='C') c++;
        if(word[i]=='D') d++;
    }

    int mn = 0;

    mn += min(N,a);
    mn += min(N,b);
    mn += min(N,c);
    mn += min(N,d);

    cout << mn << endl;
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