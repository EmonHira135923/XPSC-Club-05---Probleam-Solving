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

    vector<int> ans;

    ans.push_back(value[N-1]);

    for(int i=N-2;i>=0;i--)
    {
        if(value[i]>ans.back())
        {
            int last_digit,frist_digit;
            last_digit = value[i]%10;
            frist_digit = value[i]/10;

            ans.push_back(last_digit);
            ans.push_back(frist_digit);
        }
        else ans.push_back(value[i]);
    }

    reverse(ans.begin(),ans.end());

    bool flag = true;

    for(int i=0;i<ans.size()-1;i++)
    {
        if(ans[i]>ans[i+1])
        {
            flag = false;
            break;
        }
    }

    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;

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