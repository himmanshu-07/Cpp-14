#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << (c - a) * (d - b) + 1 << '\n';
    }
    return 0;
}
