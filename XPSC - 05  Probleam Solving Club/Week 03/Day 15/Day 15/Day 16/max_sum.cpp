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
    
    int N,K;
    cin >> N >> K;
    vector<int> value(N);
    int sum = 0;
    for(int i=0;i<N;i++)
    {
        cin >> value[i];
    }
        int l,r,ans = 0;
        l = 0,r =0;
        while(r<N)
        {
            sum += value[r];
            if(r-l+1==K)
            {
                ans = max(ans,sum);
                sum -= value[l];
                l++;
            }
            r++;
        }
    cout << ans << endl;
    return 0;
}