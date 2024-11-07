#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int ar[n];
        for(int i=0;i<n;i++) cin >> ar[i];
        int mn = 1;
        int mx = n;
        int l = 0,r = n-1;
        bool flag = false;
        while(l<r)
        {
            if(ar[l]!=mn && ar[l]!=mx && ar[r] != mx && ar[r] != mn)
            {
                if(r!=l && (r-l)>1)
                {
                    flag = true;
                    break;
                }
            }
            else if(ar[l] == mn)
            {
                l++;
                mn++;
            }
            else if(ar[l] == mx)
            {
                l++;
                mx--;
            }
            else if(ar[r] == mn)
            {
                r--;
                mn++;
            }
            else if(ar[r] == mx)
            {
                r--;
                mx--;
            }
        }
        if(flag) cout << ++l <<" " << ++r << endl;
        else cout << - 1 << endl;
    }
    return 0;
}