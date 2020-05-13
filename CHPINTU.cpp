#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,m;
		cin>>n>>m;
		map<ll,ll> mp;
		vector<ll> f,p;
		ll x;
		for(ll i=0;i<n;i++){
			cin>>x;
			f.push_back(x);
		}
		for(ll i=0;i<n;i++){
			cin>>x;
			p.push_back(x);
		}
		for(ll i=0;i<n;i++){
			mp[f[i]]+=p[i];
		}
		ll ans = mp.begin()->second;
		map<ll,ll> :: iterator itr;
				
		for(itr=mp.begin();itr!=mp.end();itr++){
			ans = min(ans,itr->second);
		}
		cout<<ans<<endl;
	}
	return 0;
}
