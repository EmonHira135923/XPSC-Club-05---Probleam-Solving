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

    map<int, int> cnt_array;
    cnt_array[0] = 1;
    ll prefix_sum = 0;
    ll result = 0;

    for (int i = 0; i < n; i++) 
    {
        prefix_sum += myvalue[i];
        int remainder = ((prefix_sum % n) + n) % n;

        result += cnt_array[remainder];
        cnt_array[remainder]++;
    }

    cout << result << endl;

    return 0;
}