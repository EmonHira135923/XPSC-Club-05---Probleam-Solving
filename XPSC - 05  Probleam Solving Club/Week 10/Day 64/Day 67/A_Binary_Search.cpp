#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;


void solve() 
{
    int N,K;
    cin >> N >> K;
    vector<int> myvalue(N);
    for(int i=0;i<N;i++) cin >> myvalue[i];

    sort(myvalue.begin(),myvalue.end());
    bool flag = false;

    while(K--)
    {
        int q;
        cin >> q;

        int l,r;
        l = 0,r=N-1; 

        bool flag = false; 
              
        while(l<=r)
        {
            int mid = (l+r)/2;

            if(q>myvalue[mid])
            {
                l = mid+1;
            }
            else if(q==myvalue[mid])
            {
                flag = true;
                break;
            }
            else
            {
                r = mid-1;
            }
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }


}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
       
    solve();


    return 0;
}