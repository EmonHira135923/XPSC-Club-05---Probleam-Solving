#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    int m=3*n;
    
    vector<pair<int,int>> value;

    int i=1,j=m;

    while(i<j)
    {
        value.push_back({i,j});
        i+=3;
        j-=3;
    }

    cout<<value.size()<<endl;

    for(auto [x,y]:value)
    {
       cout << x << " " << y << endl;
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