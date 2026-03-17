//! In The Name Of Allah

#include<bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define endl '\n'
#define frr(w,n) for(int i=w; i<n; i++)

void faaa() {
    int n;
    ll h;
    cin >> n >> h;
    vector<ll> a(n);
    for (ll &x : a) cin >> x;
    ll l = 1, r = 1e18;
    while (l <= r) {
      ll m = (l + r) / 2;
      ll sum = m;
      for (int i = 0; i < n - 1; ++i) 
        sum += min(m, a[i + 1] - a[i]);
      if (sum < h) l = m + 1;
      else r = m - 1;
    }
    cout << r + 1 << '\n';
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
