#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr);
#include<string.h>
#include<string>
using namespace std;

void solve()
{
    int N;
    cin >> N; 

    vector<int> myvalue(N);
    for(int i=0;i<N;i++) cin >> myvalue[i];

    vector<int> value = myvalue;
    sort(value.begin(),value.end());

    bool flag = false;

    if(N==1)
    {
        cout << "-1" << endl;
        return;
    }

    for(int i=0;i<N;i++)
    {
        if(myvalue[i]==value[i])
        {
            if(i==N-1)
            {
                int j=i-1;

                if(myvalue[j]!=value[i]) swap(value[i],value[j]);
                else flag = true;
            }
            else
            {
                int x = i+1;
                if(myvalue[x]!=value[i]) swap(value[i],value[x]);
                else flag = true;
            }
        }
        if(flag) break;
    }
    if(flag) cout << "-1" << endl;
    else
    {
        for(int code : value)
        {
            cout << code << " ";
        }
        cout << endl;
    }
}

int main()
{

    FASTIO;
    
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}