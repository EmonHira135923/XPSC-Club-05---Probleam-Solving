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
const int N = 200005;
int main()
{

    FASTIO;

    int n, k, q;
    cin >> n >> k >> q;

    vector<int> p(N, 0), c(N, 0);
    for (int i = 0; i < n; i++) 
    {
        int a, b;
        cin >> a >> b;
        p[a]++;
        p[b + 1]--;
    }

    for (int i = 1; i < N; i++) 
    {
        p[i] += p[i - 1];
        c[i] = c[i - 1] + (p[i] >= k);
    }

    for (int i = 0; i < q; i++) 
    {
        int a, b;
        cin >> a >> b;
        cout << c[b] - c[a - 1] << endl;
    }

    return 0;
}