#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;

void solve()
{

    int N,K;
    cin >> N >> K;

    vector<pair<int,int>> myvalue(N);
    vector<int> value(N),mycode(N);

    for(int i=0;i<N;i++)
    {
        cin >> myvalue[i].first;
        myvalue[i].second=i;
    }

    for(int i=0;i<N;i++) cin >> value[i];

    sort(value.begin(),value.end());
    sort(myvalue.begin(),myvalue.end());

    for(int i=0;i<N;i++)
    {
        mycode[myvalue[i].second] = value[i];
    }

    for(int code : mycode)
    {
        cout << code << " ";
    }
    cout << endl;

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