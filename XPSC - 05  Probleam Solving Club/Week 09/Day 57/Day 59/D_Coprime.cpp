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
    vector<int> myvalue(N+1);
    map<int,int> mycode;
    for(int i=1;i<=N;i++)
    {
        cin >> myvalue[i];
        mycode[myvalue[i]] = i;
    }   

    int mx = INT_MIN;
    for(auto value:mycode)
    {
       for(auto VALUE:mycode)
       {
        if(__gcd(value.first,VALUE.first)==1)
        {
            mx = max(mx,value.second+VALUE.second);
        }
       }
    }

    if(mx==INT_MIN) cout << "-1" << endl;
    else cout << mx << endl;

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