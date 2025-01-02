#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    
    vector<int> myvalue(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> myvalue[i];
    }

    sort(myvalue.begin(), myvalue.end());
    
    int q;
    cin >> q;
    
    while (q--) 
    {
        int m;
        cin >> m;
        int shops = upper_bound(myvalue.begin(), myvalue.end(), m) - myvalue.begin();
        cout << shops << endl;
    }

    return 0;
}