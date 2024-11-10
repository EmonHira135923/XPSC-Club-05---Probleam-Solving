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
    
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        char x;
        cin >> n >> x;
        string ar;
        cin >> ar;
        vector<int> pos;
        for(int i=0;i<ar.size();i++)
        {
            if(ar[i] == 'g')
            {
                pos.push_back(i);
            }
        }
        if(x == 'g') 
        {
            cout << 0 << endl;
            continue;
        }
        int mx = INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(ar[i] == x )
            {
                int posi;
                auto it = upper_bound(pos.begin(), pos.end(), i);
                if(it == pos.end())
                {
                     posi = (n-i)+(pos[0]);
                }
                else
                {
                    posi = *it-i;
                }
                mx=max(mx,posi);
            }
        }
        cout<< mx << endl;
    }
    return 0;
}