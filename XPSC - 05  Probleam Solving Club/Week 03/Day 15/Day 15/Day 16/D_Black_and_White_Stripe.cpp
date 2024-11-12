#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;
void solve()
{
    int N,K;
    cin >> N >> K;

    string word;
    cin >> word;

    int mn_value = INT_MAX;
    int cnt = 0;

    for(int i=0;i<K;i++)
    {
        if(word[i]=='W') cnt++;
    }

    mn_value = cnt;

    for(int i=K;i<N;i++)
    {
        if(word[i-K]=='W') cnt--;
        if(word[i]=='W')cnt++;

        mn_value = min(mn_value,cnt);
    }

    cout << mn_value << endl;
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