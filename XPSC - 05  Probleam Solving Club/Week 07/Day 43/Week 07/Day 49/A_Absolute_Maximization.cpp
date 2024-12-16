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
    
    bool flag = true;

    for(int i=0;i<N-1;i++)
    {
        if(myvalue[i] != myvalue[i+1])
        {
            flag = false;
            break;
        }
    }
    if(flag) cout << "0" << endl;
    else
    {
        int mn,mx;
        mn = myvalue[0],mx=0;
        for(int i=0;i<N;i++)
        {
            mx = (mx | myvalue[i]);
            mn = (mn & myvalue[i]);
        }
        cout << abs(mx-mn) << endl;
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