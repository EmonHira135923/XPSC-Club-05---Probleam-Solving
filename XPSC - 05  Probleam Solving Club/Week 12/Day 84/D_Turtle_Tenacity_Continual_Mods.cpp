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

    sort(myvalue.begin(),myvalue.end());

    int x = 0;

    if(myvalue[0] != myvalue[1])
    {
        cout << "YES" << endl;
        return;
    }
    else
    {
        for(int i=2;i<N;i++)
        {
            if(myvalue[i] % myvalue[0] != 0)
            {
                x++;
                break;
            }
        }
    }

    if(x!=0) cout << "YES" << endl;
    else cout << "NO" << endl;
    
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