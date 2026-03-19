//! In The Name Of Allah

#include<bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define endl '\n'
#define frr(w,n) for(int i=w; i<n; i++)

void faaa() {
    ll n;
    cin >> n;
    ll ans = 0;
    vector<ll>v(n);

    frr(0,n) cin >> v[i];

    map<ll,ll> m;

    for(auto x : v){
        int y = log2(x);
        m[y]++;
    }

    
    for (auto p : m) {
        ll c = p.second;
        ans += 1LL * c * (c - 1) / 2;
    }

    cout << ans << endl;
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
