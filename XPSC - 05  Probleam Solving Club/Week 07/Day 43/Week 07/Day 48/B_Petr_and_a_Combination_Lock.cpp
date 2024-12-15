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

    vector<int> value(N);
    for(int i=0;i<N;i++) cin >> value[i];

    bool flag = false;
    for(int mask=0;mask<(1<<N);mask++)
    {
        int sum = 0;
        for(int k=0;k<N;k++)
        {
            if((mask>>k)&1)
            {
                sum += value[k];
            }
            else
            {
                sum -= value[k];
            }
        }
        
        if(sum % 360==0)
        {
            flag = true;
            break;
        }
    }

    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}