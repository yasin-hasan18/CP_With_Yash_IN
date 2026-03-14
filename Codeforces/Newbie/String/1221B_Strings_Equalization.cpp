//! In The Name Of Allah

#include<bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define endl '\n'
#define frr(w,n) for(int i=w; i<n; i++)

void faaa() {
    string s, t;
    cin >> s >> t;

    set<char> sts(s.begin(), s.end());
    set<char> stt(t.begin(), t.end());

    bool pos = false;
    for(char c : sts) {
        if(stt.count(c)) {
            pos = true;
            break;
        }
    }

        cout << (pos ? "YES" : "NO") << "\n";
    }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        faaa();

    return 0;
}
