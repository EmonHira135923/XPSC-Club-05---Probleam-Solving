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

    int N,Q;
    cin >> N >> Q;

    vector<int> myvalue(N);  
    for(int i=0;i<N;i++) cin >> myvalue[i];

    while(Q--)
    {
        int mid,l,r,ans,key;
        cin >> key;
        l=0,r=N-1;
        ans = N;


        while(l<=r)
        {
            mid = (l+r)/2;

            if(key<=myvalue[mid])
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << ans + 1 << endl;
    }

    return 0;
}