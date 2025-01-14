#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr);
#include<string.h>
#include<string>
using namespace std;

int main()
{
    FASTIO;

    int N;
    cin >> N;

    vector<int> all_prime(N+1,0);

    for(int i=2;i<=N;i++)
    {
        if(all_prime[i]==0)
        {
            for(int j=i;j<=N;j+=i)
            {
                all_prime[j]++;
            } 
        }
    }

    int cnt = 0;

    for(int i=1;i<=N;i++)
    {
        if(all_prime[i]==2)
        {
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}