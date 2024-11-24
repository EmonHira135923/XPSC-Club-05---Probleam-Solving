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
    vector<int> myvalue(N);
    int Xor = 0;
    for(int i=0;i<N;i++)
    {
        cin >> myvalue[i];
        Xor ^= myvalue[i];
    }

    int x = -1; 
    for (int i = 0; i < N; i++) 
    { 
        int tempXOR = 0;
        for (int j = 0; j < N; j++) 
        {
            tempXOR ^= (myvalue[j] ^ i);
        }
        if (tempXOR == 0) 
        {
            x = i;
            break;
        }
    }
    cout << x << endl;

    
    
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