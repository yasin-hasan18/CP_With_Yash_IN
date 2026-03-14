//! In The Name Of Allah

#include<bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define endl '\n'
#define frr(w,n) for(int i=w; i<n; i++)

void faaa() {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    unordered_map<char,int> fr;
    for(char c : s1) {
        if(c != ' ') fr[c]++;
    }

    bool pos = true;
    for(char c : s2) {
        if(c == ' ') continue;
        if(fr[c] > 0) {
            fr[c]--;
        } else {
            pos = false;
            break;
        }
    }

    cout << (pos ? "YES" : "NO") << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // int t;
    // cin >> t;
    // while (t--)
        faaa();

    return 0;
}
