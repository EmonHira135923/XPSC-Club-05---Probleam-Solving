#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;
void solve()
{
          int n,m,x;
        cin >> n >> m >> x;
        set<int> st;
        while(m--)
        {
            int xx;
            cin >> xx;
            st.insert(xx);
       }
       while(x--)
       {
         int val;
         cin >> val;
 
         auto it =  st.upper_bound(val);
        if(it == st.begin())
        {
            cout<<*st.begin()-1<< endl;
        }
        else if(it == st.end())
        {
            cout<<n-*st.rbegin()<< endl;
        }
        else
        {
            auto track = it;
            int ans = (*track-*(--it))/2;
            cout << ans << endl;
        }
       }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}