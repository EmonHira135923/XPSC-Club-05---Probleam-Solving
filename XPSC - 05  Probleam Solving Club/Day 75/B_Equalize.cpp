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
    set<int> myvalue;
    for(int i=0;i<N;i++)
    {
        int x;
        cin >> x;
        myvalue.insert(x);
    }

    vector<int> value;
    for(int add_value : myvalue)
    {
        value.push_back(add_value);
    }

    int l,r,ans;
    l=0,r=0,ans=INT_MIN;

    while(r<value.size())
    {
        if(abs(value[r]-value[l])>N-1)
        {
            while((value[r]-value[l])>N-1)
            {
                l++;
            }
        }
        else ans = max(ans,r-l+1);
        r++;
    }
    cout << ans << endl;

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