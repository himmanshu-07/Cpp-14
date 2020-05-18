#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    ll ans = 0;
    for(int i=0;i<n;i++){
        ans = max(ans,(a[i]*(n-i)));
    }
    cout<<ans<<endl;
    return 0;
}
