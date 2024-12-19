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
    vector<int> myvalue(N);
    for(int i=0;i<N;i++) cin >> myvalue[i];

    int cnt = 0;
    bool flag = false;

    for(int i=N-2;i>=0;i--)
    {
        while(myvalue[i]>=myvalue[i+1] && myvalue[i]>0)
        {
            myvalue[i] /= 2;
            cnt++;
        }
        if(myvalue[i] == myvalue[i+1])
        {
            flag = true;
            break;
        }
    }
    if(flag) cout << "-1" << endl;
    else cout << cnt << endl;
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