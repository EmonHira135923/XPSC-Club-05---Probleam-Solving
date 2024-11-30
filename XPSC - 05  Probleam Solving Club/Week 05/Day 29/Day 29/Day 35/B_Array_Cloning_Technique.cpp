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
    map<int,int> frq;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        frq[x]++;
    }
    int mx=0;
    for(auto [x,y]:frq)
    {
        mx=max(mx,y);
    }
    int op=0;
    while(mx<n)
    {
        int add=min(n-mx,mx);
        op+=1+add;
        mx+=add;
    }
    cout<<op<<endl;
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