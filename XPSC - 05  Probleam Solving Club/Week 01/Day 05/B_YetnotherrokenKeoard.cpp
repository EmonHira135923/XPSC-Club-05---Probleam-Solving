#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);  
    int t;
    cin >> t;
    while (t--) 
    {
        string value;
        cin >> value;
        string result = ""; 
        for (char c : value) 
        {
            if (c == 'b')
            {
                if (!result.empty())
                {
                    for (int i = result.size()-1;i >= 0;i--) 
                    {
                        if (islower(result[i])) 
                        {
                            result.erase(result.begin() + i);
                            break;
                        }
                    }
                }
            } 
            else if (c == 'B') 
            {
                if (!result.empty()) 
                {
                    for (int i = result.size()-1;i >= 0;i--) 
                    {
                        if (isupper(result[i])) 
                        {
                            result.erase(result.begin() + i);
                            break;
                        }
                    }
                }
            }
            else 
            {
                result += c;
            }
        }
        cout << result << endl;
    }
    return 0;
}