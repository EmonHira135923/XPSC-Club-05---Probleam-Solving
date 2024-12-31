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

    int n, k;
    cin >> n >> k;
    vector<int> myvalue(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> myvalue[i];
    }

    map<int, int> freq;
    ll result = 0;
    int left = 0;

    for (int right = 0; right < n; right++) 
    {
        freq[myvalue[right]]++;
        
        while (freq.size() > k) 
        {
            freq[myvalue[left]]--;
            if (freq[myvalue[left]] == 0) 
            {
                freq.erase(myvalue[left]);
            }
            left++;
        }

        result += (right - left + 1);
    }

    cout << result << endl;

    return 0;
}