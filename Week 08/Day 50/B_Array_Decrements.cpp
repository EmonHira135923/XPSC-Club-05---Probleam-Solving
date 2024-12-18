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
    vector<int> value(N),myvalue(N);

    for(int i=0;i<N;i++) cin >> value[i];
    for(int i=0;i<N;i++) cin >> myvalue[i];

    vector<int> code(N);
    int mx_value = INT_MIN;

    for(int i=0;i<N;i++)
    {
        code[i] = value[i] - myvalue[i];
        mx_value = max(mx_value,code[i]);
    }

    if(N==1)
    {
        if(value[0]<myvalue[0]) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    else
    {
        bool flag = true;
        for(int i=0;i<N;i++)
        {
            if(value[i] < myvalue[i])
            {
                flag = false;
                break;
            }
            if(code[i]<mx_value && myvalue[i] != 0)
            {
                flag = false;
                break;
            }
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
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