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

    vector<int> myvalue(N);
    for(int i=0;i<N;i++) cin >> myvalue[i];


    sort(myvalue.begin(),myvalue.end());

    auto ok = [&](int val)
    {
        int total_cow = 1;
        int cow_present = myvalue[0];
        for(int i=1;i<N;i++)
        {
            if(myvalue[i]-cow_present >= val)
            {
                total_cow++;
                cow_present = myvalue[i];
                if(total_cow==K) return true;
            }
            cout << total_cow << " ";
        }
        return false;
    };

    int l,r,ans,mid;

    l = 1,r = myvalue.back()-myvalue.front();
    ans = 0;

    while(l<=r)
    {
        mid = l + (r-l)/2;

        if(ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else r = mid - 1;
    }

    cout << ans << endl;

    return 0;
}