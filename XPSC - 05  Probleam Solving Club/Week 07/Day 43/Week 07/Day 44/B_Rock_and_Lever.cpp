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
    vector<int> value(N);
    map<int,int> pq;

    for(int i=0;i<N;i++)
    {
        cin>>value[i];
        pq[__lg(value[i])]++;
    }

    ll pair = 0;

    for(auto [x,y]:pq)
    {
        if(y==2) pair++;
        else if(y>2)
        {
            pair += ((1LL*y*(y-1))/2);
        }
    }
    cout << pair << endl;
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