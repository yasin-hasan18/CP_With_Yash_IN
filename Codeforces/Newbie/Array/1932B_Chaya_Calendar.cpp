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

        vector<long long> a(n);

        frr(0,n) cin >> a[i];

        long long yr = 0;

        frr(0,n){
            yr = ((yr / a[i]) + 1) * a[i];
        }

        cout << yr << endl;
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
