#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll t;	cin>>t;
	while(t--){
		ll n;	cin>>n;
		ll a[n],b[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(ll i=0;i<n;i++)
			cin>>b[i];
		sort(a,a+n);
		sort(b,b+n);
		
		ll s = 0;
		
		for(ll i=0;i<n;i++)
			s += min(a[i],b[i]);
			
		cout<<s<<endl;
	}
	return 0;
}
