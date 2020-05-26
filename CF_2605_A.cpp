#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,m;
		ll ans = 0;
		cin>>n>>m;
		if(m%2){
			if(n%2)
				ans = ((n*(m/2))+(n+1)/2);
			else
				ans = ((n*(m/2))+(n/2));
		}
		else
			ans = (n*(m/2));
	
		cout<<ans<<"\n";
	}
	return 0;
}
