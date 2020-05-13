#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll maxi(ll a,ll b,ll c){
	return max(a,max(b,c));
}

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,k;
		cin>>n>>k;
		ll a[n];
		map<ll,ll> m;
		m[1]=m[2]=0;
		ll ans=0;
		for(ll i=0;i<n;i++){
			cin>>a[i];
			m[a[i]]++;
			if(m[1]!=0 &&m[2]!=0){
				ans=maxi(ans,m[1],m[2]);
				m[1]=m[2]=0;
				m[a[i]]++;
			}
		}
		ans = maxi(ans,m[1],m[2]);
		cout<<ans<<endl;
	}
	return 0;
}
