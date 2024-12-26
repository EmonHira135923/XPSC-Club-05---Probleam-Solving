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
    deque<int> myvalue(N);
    for(int i=0;i<N;i++) cin >> myvalue[i];

    sort(myvalue.begin(),myvalue.end());

    for(int i=1;i<N;i++)
    {
        if(i%2==1) myvalue.pop_front();
        else myvalue.pop_back();
    }
    cout << myvalue.front() << endl;
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