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
    vector<ll> value(N);
    for(ll i=0;i<N;i++) cin >> value[i];

    ll even = 0,odd = 0,max_value =  LLONG_MIN;
    for(ll i=0;i<N;i++)
    {
        if((value[i]%2==0))
        {
            even++;
        }
        else
        {
            odd++;
            max_value = max(max_value,value[i]);
        }
    }
    if(even == N || odd == N) cout << "0" << endl;
    else
    {
        vector<ll> myvalue;
        for(ll i=0;i<N;i++)
        {
            if(value[i]%2==0)
            {
                myvalue.push_back(value[i]);
            }
        }
        int cnt_size = myvalue.size();
        sort(myvalue.begin(),myvalue.end());
        for(ll x:myvalue)
        {
            if(x<max_value)
            {
                max_value+=x;
            }
            else
            {
                cnt_size++;
                break;
            }
        }
        cout<< cnt_size  << endl;
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