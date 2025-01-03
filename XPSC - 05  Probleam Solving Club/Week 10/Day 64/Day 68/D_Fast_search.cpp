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

    vector<int> myvalue(N);
    for(int i=0;i<N;i++) cin >> myvalue[i];

    sort(myvalue.begin(),myvalue.end());

    int Q;
    cin >> Q;

    while(Q--)
    {
        int l,r;
        cin >> l >> r;
        
        int left,right;

        left = lower_bound(myvalue.begin(),myvalue.end(),l) - myvalue.begin();
        right = upper_bound(myvalue.begin(),myvalue.end(),r) - myvalue.begin();

        int ans = right - left;

        cout << ans << " ";
    }
    cout << endl;

    return 0;
}