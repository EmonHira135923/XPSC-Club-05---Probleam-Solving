#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr);
#include<string.h>
#include<string>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

bool isVowel(char c)
{
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}
 

void solve()
{

    string word,wd;
    cin >> word >> wd;

    if(word.size() != wd.size())
    {
        cout << "No" << endl;
        return;
    }
    else
    {
        for (int i=0;i<word.size();i++)
        {
            if(isVowel(word[i]) != isVowel(wd[i]))
            {
                cout << "No" << endl;
                return;
            }
        }

    }

    cout << "Yes" << endl;
}
int main()
{

    FASTIO;

    solve();

    return 0;
}