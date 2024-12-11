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

    vector<int> value(N+1);
    for(int i=1;i<=N;i++) cin >> value[i];
    int sum = value[1] | value[2];
    for(int i=3;i<=N;i++)
    {
        sum = sum | value[i];
    } 

    cout << sum << endl;

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