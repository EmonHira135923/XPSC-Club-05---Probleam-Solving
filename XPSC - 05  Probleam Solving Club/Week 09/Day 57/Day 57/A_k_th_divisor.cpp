#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
#include<string.h>
#include<string>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n,k;
    cin >> n >> k;
    
    vector<long long> div;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            div.push_back(i);
            if(i!=n/i)div.push_back(n/i);
        }
    }
    sort(div.begin(),div.end());
    if(k>div.size()) cout << -1 << endl;
    else cout << div[k-1];

    return 0;
}