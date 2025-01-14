#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr);
#include<string.h>
#include<string>
using namespace std;

bool is_prime(ll N)
{
    if(N==1) return false;

    for(int i=2;i*i<=N;i++)
    {
        if(N%i==0) return false;
    }
    return true;
}

bool is_perfect_squre(ll N)
{
    ll x = sqrtl(N);
    return (x*x) == N;
}

int main()
{
    FASTIO;

    ll N;
    cin >> N;

    for(int i=1;i<=N;i++)
    {
        ll x;
        cin >> x;

        if(is_perfect_squre(x) && (is_prime(sqrtl(x)))) cout << "YES" << endl;
        else cout << "NO" << endl;

    }

    return 0;
}