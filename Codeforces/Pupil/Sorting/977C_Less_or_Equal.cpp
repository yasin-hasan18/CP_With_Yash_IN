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

    if(x == 0){
        if(v[0] == 1){
            cout << -1 <<endl;
        }
        else {
            cout << v[0] - 1 <<endl;
        }
    }
    else {
        int m = v[x-1];

        if(x<n and v[x] == m){
            cout << -1 <<endl;
        }
        else {
            cout << m <<endl;
        }
    }
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
