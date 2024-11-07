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
    
    int t;
    cin >> t;
    while(t--)
    {
        int N;
        cin >> N;
        vector<int> myvalue(N);
        
        for(int i = 0; i < N; i++)
        {
            cin >> myvalue[i];
        }
        
        for(int i = 0; i < N; i++)
        {
            int mv;
            string a;
            cin >> mv >> a;

            int digit = myvalue[i];

            for(char word : a)
            {
                if(word == 'U')
                {
                    digit = (digit - 1 + 10) % 10;
                }
                else if(word == 'D')
                {
                    digit = (digit + 1) % 10;
                }
            }
            myvalue[i] = digit; 
        }
        for(int i = 0; i < N; i++)
        {
            cout << myvalue[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
