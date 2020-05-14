#include<bits/stdc++.h>
typedef long long ll;
using namespace std;


        /* Himanshu Pandey */

int main(){
    ll T;
    cin>>T;
    ll prft=0;
    while(T--){
        ll n;   cin>>n;
        char m;
        ll t;
        ll a[4][4]={0};

        for(ll i=0;i<n;i++){
            cin>>m>>t;
            ll x = int(m-65);
            ll y = (t/3)-1;
            a[x][y]++;
            // alphabet->row
        }

        ll b,c,d,profit;
        ll r,c;
        for(ll i=0;i<4;i++){
            ll mx = a[i][0];
            for(ll j=0;j<4;j++)
                c = 0;
            cout<<endl;
        }
    }
    return 0;
}