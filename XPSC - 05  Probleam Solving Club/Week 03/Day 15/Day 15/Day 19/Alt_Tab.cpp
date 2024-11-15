#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

void solve() {
    int N;
    cin >> N;

    deque<string> programs;
    set<string> seen;

    for (int i = 0; i < N; i++) {
        string program;
        cin >> program;

        if (seen.count(program)) {
            programs.erase(find(programs.begin(), programs.end(), program));
        }

        programs.push_front(program);
        seen.insert(program);
    }

    for (const string& program : programs) {
        cout << program.substr(program.size() - 2);
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();

    return 0;
}
