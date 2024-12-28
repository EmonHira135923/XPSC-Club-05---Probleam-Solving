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

    ll l,r;
    cin >> l >> r;
    vector<ll> myvalue;
    vector<ll> value;
    for(ll i=l;i<=r;i++)
    {
        if(i%2==0) myvalue.push_back(i);
        else value.push_back(i);
    }
    cout << "YES" << endl;
    ll n = (r-l+1)/2;
    for(ll i=0;i<n;i++)
    {
        cout << myvalue[i] << " " << value[i] << endl;
    }

    return 0;
}