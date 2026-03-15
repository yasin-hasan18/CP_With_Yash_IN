//! In The Name Of Allah

#include<bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define endl '\n'
#define frr(w,n) for(int i=w; i<n; i++)

void faaa() {
            string p, s;
        cin >> p >> s;

        int i = 0, j = 0;
        int n = p.size(), m = s.size();
        bool ok = true;

        while(i < n && j < m) {
            if(p[i] != s[j]) {
                ok = false;
                break;
            }

            char c = p[i];

            int cp = 0;
            while(i < n && p[i] == c) {
                cp++;
                i++;
            }

            int cs = 0;
            while(j < m && s[j] == c) {
                cs++;
                j++;
            }

            if(cs < cp || cs > 2 * cp) {
                ok = false;
                break;
            }
        }

        if(i != n || j != m) ok = false;

        cout << (ok ? "YES\n" : "NO\n");
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
