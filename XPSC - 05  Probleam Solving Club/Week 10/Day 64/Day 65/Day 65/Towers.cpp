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

    int N;
    cin >> N;
    vector<int> myvalue(N);
    for(int i=0;i<N;i++) cin >> myvalue[i];

    vector<int> freq;

    for(int i=0;i<N;i++)
    {
        auto it = upper_bound(freq.begin(),freq.end(),myvalue[i]);

        if(it==freq.end())
        {
            freq.push_back(myvalue[i]);
        }
        else
        {
            *it = myvalue[i];
        }
    }

    cout << freq.size() << endl;

    return 0;
}