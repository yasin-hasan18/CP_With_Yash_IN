//! In The Name Of Allah

#include<bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define endl '\n'
#define frr(w,n) for(int i=w; i<n; i++)

void faaa(){
    int n;
    cin >> n;

    vector<ll> a(n), b(n+1);

    frr(0,n) cin >> a[i];

    frr(0,n+1) cin >> b[i];

    ll cnt = 0, mn = LLONG_MAX;

    frr(0,n){
        cnt += abs(a[i] - b[i]);

        ll l = min(a[i], b[i]);
        ll r = max(a[i], b[i]);

        if(b[n] >= l && b[n] <= r){
            mn = 0;
        } else {
            mn = min(mn, min(abs(a[i]-b[n]), abs(b[i]-b[n])));
        }
    }

    cout << cnt + mn + 1 <<endl;

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
