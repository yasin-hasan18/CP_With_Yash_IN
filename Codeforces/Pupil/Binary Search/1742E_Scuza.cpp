//! In The Name Of Allah

#include<bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define endl '\n'
#define frr(w,n) for(int i=w; i<n; i++)

void faaa() {
  ll n,q;
  cin >> n >> q;
  vector<ll> v(n);

  frr(0,n) cin >> v[i];

  vector<pair<ll,ll>> pr(q);
  vector<ll>ans(q);
  ll sm = 0;

  frr(0,q){
    cin >> pr[i].first;
    pr[i].second = i;
  }

  sort(pr.begin(), pr.end());

  ll pos = 0;

  frr(0,q){
    while(pos<n and v[pos]<=pr[i].first){
      sm+=v[pos];
      pos++;
    }

    ans[pr[i].second] = sm;
  }
  for(auto x : ans) {
      cout << x <<" ";
    }
    cout <<endl;
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
