#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;


ll count_pair(vector<int>&myvalue,int l,int r)
{
    sort(myvalue.begin(),myvalue.end());
    ll count = 0;
    int size = myvalue.size();

    for(int i=0;i<size;i++)
    {
        int left,right;

        left = l - myvalue[i];
        right = r - myvalue[i];

        int low_value,higher_value;

        low_value = lower_bound(myvalue.begin() + i + 1, myvalue.end(), left) - myvalue.begin();
        higher_value = upper_bound(myvalue.begin() + i + 1, myvalue.end(), right) - myvalue.begin();

        count += (higher_value-low_value);
    }
    return count;
}


void solve() 
{
    int N,L,R;
    cin >> N >> L >> R;

    vector<int> value(N);
    for(int i=0;i<N;i++)
    {
        cin >> value[i];
    }

    cout << count_pair(value,L,R) << endl;
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