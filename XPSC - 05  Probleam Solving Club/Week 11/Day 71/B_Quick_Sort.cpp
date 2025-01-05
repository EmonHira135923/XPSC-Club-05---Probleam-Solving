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
    vector<int> myvalue(N);
    for(int i=0;i<N;i++) cin >> myvalue[i];

    int cnt_array = 0;

    for(int i=0;i<N;i++)
    {
        if(myvalue[i]==cnt_array+1)
        {
            cnt_array++;
        }
    }

    int remaning_array = N - cnt_array;

    int op = (remaning_array+K-1) / K;

    cout << op << endl;



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