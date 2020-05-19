#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll s[n],p[n],v[n],ans = 0;
		for(ll i=0;i<n;i++){
			cin>>s[i]>>p[i]>>v[i];
			if(p[i]>s[i])
			ans = max(ans,(p[i]/(s[i]+1))*v[i]);
		}
		cout<<ans<<endl;
	}
	return 0;
}
			
