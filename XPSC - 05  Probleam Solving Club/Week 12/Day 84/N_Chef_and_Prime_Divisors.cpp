#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;

bool checkDivisibility(ll A, ll B) 
{
    for (ll i = 2; i * i <= B; i++) 
    {
        if (B % i == 0) 
        {
            if (A % i != 0) return false;
            while (B % i == 0) B /= i;
        }
    }
    if (B > 1 && A % B != 0) return false;
    return true;
}

void solve() 
{
    ll A, B;
    cin >> A >> B;
    if (checkDivisibility(A, B)) cout << "Yes" << endl;
    else cout << "No" << endl;
}

int main() 
{
    FASTIO;

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    
    return 0;
}
