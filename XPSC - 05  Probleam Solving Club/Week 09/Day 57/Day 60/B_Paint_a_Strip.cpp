#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;

void solve() 
{
    ll N;
    cin >> N;

    if(N==1 || N==2) cout << N << endl;
    else
    {
        ll cnt,word;
        cnt = 1,word = 1;

        while(word<N)
        {
            word *= 2;
            word += 2;
            cnt++;
        }
        cout << cnt << endl;
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