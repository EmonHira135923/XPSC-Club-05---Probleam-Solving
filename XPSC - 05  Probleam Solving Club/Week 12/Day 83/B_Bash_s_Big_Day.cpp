#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr);
#include<string.h>
#include<string>
using namespace std;

const int MAX = 1e5+7;

void solve() 
{
    int n;
    cin >> n;

    vector<int> freq(MAX, 0);
    vector<int> arr(n);

    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
        freq[arr[i]]++;
    }

    int maxGroup = 1; 

    for (int i = 2; i < MAX; i++) 
    {  
        int count = 0;
        for (int multiple = i; multiple < MAX; multiple += i) 
        {
            count += freq[multiple];
        }
        maxGroup = max(maxGroup, count);
    }
    cout << maxGroup << endl;
}
int main()
{

    FASTIO;

    solve();

    return 0;

}