#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,q;
		cin>>n>>q;
		ll a[n];
		for(ll i=0;i<n;i++)
			cin>>a[i];
		while(q--){
			ll l,r,y,count;
			count = 0;
			cin>>l>>r>>y;
			for(ll i=l;i<r;i++)
			if((a[i-1]<=y&&a[i]>=y) || (a[i-1]>=y && a[i]<=y))
				count++;
			cout<<count<<"\n";
		}
	}
	return 0;
}
