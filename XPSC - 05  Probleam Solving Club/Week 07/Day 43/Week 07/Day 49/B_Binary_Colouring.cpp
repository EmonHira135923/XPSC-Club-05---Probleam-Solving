#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    vector<int> v;
    for(int i=31;i>=0;i--)
    {
        if((n>>i)&1) v.push_back(1);
        else v.push_back(0);
    }
    reverse(v.begin(),v.end());
    for(int i=0;i<32;i++)
    {
        if(v[i]==1)
        {
            if((i+1)<32 && v[i+1]==1)
            {
                v[i] = -1;
                int j = i+1;
                while(j<=32)
                {
                    if(v[j]!=1) break;
                    v[j] = 0;
                    j++;
                }
                v[j] = 1;
                i = j-1;
            }
        }
    }
    cout << 32 << endl;
    for(int x:v)
    {
        cout << x << " ";
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