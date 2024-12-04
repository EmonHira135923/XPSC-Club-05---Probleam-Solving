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
    vector<int> v(n);
    vector<int> dis(n);
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
        dis[i] = abs(v[i]-(i+1));
    }
    int k = dis[0];
    for(int i=1;i<n;i++)
    {
        k = __gcd(k,dis[i]);
        if(k==1) break;;
    }
    cout << k <<endl;
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