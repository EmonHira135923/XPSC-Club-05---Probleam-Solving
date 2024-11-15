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

    for(int i=0;i<N;i++)
    {
        cin >> value[i];
    }

    sort(value.begin(),value.end());

    int result = INT_MAX;
    result = min(result, value[N-1] - value[2]);
    result = min(result, value[N-3] - value[0]);
    result = min(result, value[N-2] - value[1]);

    cout << result << endl;
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