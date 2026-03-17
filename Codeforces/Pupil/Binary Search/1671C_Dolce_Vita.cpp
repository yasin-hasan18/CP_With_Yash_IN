//! In The Name Of Allah

#include<bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define endl '\n'
#define frr(w,n) for(int i=w; i<n; i++)

void faaa() {
    ll n,x;
    cin >> n >> x;
    ll ans = 0;
    vector<ll>v(n);

    frr(0,n) cin >> v[i];

    sort(v.begin(), v.end());

    vector<ll>pre(n,0);
    ll sm = 0;

    frr(0,n) {
        sm += v[i];
        pre[i] = sm;
    }

    for(ll i = n-1; i>=0; i--) {
        ll dif = x - pre[i];

        if(dif >= 0 and dif/(i+1)>=0){
            ans+=(dif/(i+1))+1;
        }
    }
    cout << ans <<endl;
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
