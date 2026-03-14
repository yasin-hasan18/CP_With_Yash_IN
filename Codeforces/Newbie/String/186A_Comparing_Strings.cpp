//! In The Name Of Allah.

#include<bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define endl '\n'
#define frr(w,n) for(int i=w; i<n; i++)

void faaa() {
    string s,t;
    cin >> s >> t;

    if(s.size() != t.size()) {
        no
        return;
    } 
    vector <int>v;

    frr(0,s.size()){
        if(s[i] != t[i]) {
            v.push_back(i);
        }
    }

    if(v.size()!=2){
        no
        return;
    }

    if(s[v[0]] == t[v[1]] and s[v[1]] == t[v[0]]) {
        yes
        return;
    }
    else no
    return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // int t;
    // cin >> t;
    // cin.ignore();
    // while (t--)
        faaa();

    return 0;
}
