//! In The Name Of Allah

#include<bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define endl '\n'
#define frr(w,n) for(int i=w; i<n; i++)

void faaa() {
    string s;
    getline(cin, s);

    bool f = false, r = false;

    if(s.size() >= 5 && s.substr(0,5) == "miao.") r = true;

    if(s.size() >= 5 && s.substr(s.size()-5) == "lala.") f = true;

    if(f && !r) cout << "Freda's\n";

    else if(!f and r) cout << "Rainbow's\n";

    else cout << "OMG>.< I don't know!\n";

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    cin.ignore();
    while (t--)
        faaa();

    return 0;
}
