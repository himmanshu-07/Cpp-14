#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll t;
		cin>>t;
		while(t--){
			ll n;
			cin>>n;
			vector<ll> v;
			ll x;
			for(ll i=0;i<n;i++){
				cin>>x;
				v.push_back(x);
			}
			ll score = v[0];
			ll mn = v[0];
			for(ll i=1;i<n;i++){
				if(v[i]<mn){
					score += v[i];
					mn = v[i];
				}
				else
					score += mn;
			}
		cout<<score<<endl;
		}
	return 0;
}
