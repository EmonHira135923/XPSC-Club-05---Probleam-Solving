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
    vector<int> value(N);
    for(int i=0;i<N;i++) cin >> value[i];

    map<char,int> mycode;
    string ans;
    for(auto val : value)
    {
        for(char i='a';i<='z';i++)
        {
            if(mycode[i] == val)
            {
                ans+=i;
                mycode[i]++;
                break;
            }
        }
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