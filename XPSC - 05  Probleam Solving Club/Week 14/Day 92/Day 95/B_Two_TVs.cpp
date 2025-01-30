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

    int N;
    cin >> N;

    map<int,int> mp;
    for(int i=1;i<=N;i++)
    {
        int l,r;
        cin >> l >> r;

        mp[l]++;
        mp[r+1]--;
    }

    ll sum = 0;
    bool flag = false;

    for(auto[key,val]:mp)
    {
        sum += val;
        if(sum>2)
        {
            flag = true;
            break;
        }
    }

    if(!flag) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}