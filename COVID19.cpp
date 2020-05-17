#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll a[n];
		for(ll i=0;i<n;i++)
			cin>>a[i];
		
		ll mn = INT_MAX;
		ll mx = 1,count;
		vector <ll> v;
		
		for(ll i=0;i<n-1;i++){
			count = 1;
			ll j=i;
			while(a[j+1]-a[j]<=2 && j<n-1){
				count++;
				j++;
			}
			i = j;
				v.push_back(count);
		}
		sort(v.begin(),v.end());
		mn = v[0];
		mx = v[v.size()-1];
		if(a[n-1]-a[n-2]>2)
			mn = 1;
		cout<<mn<<" "<<mx<<"\n";
	}
	return 0;
}

