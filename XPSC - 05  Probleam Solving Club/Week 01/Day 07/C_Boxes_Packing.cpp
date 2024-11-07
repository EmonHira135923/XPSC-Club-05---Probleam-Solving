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
    map<int,int> freq;
    for(int i=0;i<N;i++)
    {
        cin >> myvalue[i];
        freq[myvalue[i]]++;
    }
    int mx_value = 0;
    for(auto value :freq)
    {
        mx_value = max(mx_value,value.second);
    }

    cout << mx_value << endl;

    return 0;
}