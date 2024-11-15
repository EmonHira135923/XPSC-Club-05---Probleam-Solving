#include<bits/stdc++.h>
using namespace std;
void solve() 
{
    string a, b;
    cin >> a >> b;

    char sizeA = a.back(), sizeB = b.back();
    int countA = count(a.begin(), a.end(), 'X');
    int countB = count(b.begin(), b.end(), 'X');

    if (sizeA == sizeB) 
    { 
        if (sizeA == 'S') 
        { 
            if (countA < countB) cout << ">" << endl;
            else if (countA > countB) cout << "<" << endl;
            else cout << "=" << endl;
        } 
        else if (sizeA == 'L') 
        { 
            if (countA < countB) cout << "<" << endl;
            else if (countA > countB) cout << ">" << endl;
            else cout << "=" << endl;
        } 
        else 
        {
            cout << "=" << endl;
        }
    } 
    else 
    { 
        if (sizeA == 'S') cout << "<" << endl;
        else if (sizeA == 'M') cout << (sizeB == 'L' ? "<" : ">") << endl;
        else cout << ">" << endl;
    }
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}
