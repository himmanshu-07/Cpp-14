#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,k,x;
		cin>>n>>k;
		vector<ll> b,v,arr;
		map <ll,ll> m;
		for(ll i=0;i<n;i++){
			cin>>x;
			v.push_back(x);
			b.push_back(x);
			m[x] = i+1;
		}
		sort(b.begin(),b.end());
		for(ll i=0;i<n;i++)
			if(b[i]!=v[i])
				arr.push_back(v[i]);
		ll r = (arr.size()/3);
		if(r>k){
			cout<<"-1\n";
			continue;
		}
		else{
			if(arr.size()%3)
				cout<<r+1<<"\n";
			else
				cout<<r<<endl;
			sort(arr.begin(),arr.end());
			ll i=0;
			while(r--){
				cout<<m[arr[i+1]]<<" "<<m[arr[i+2]]<<" "<<m[arr[i]]<<"\n";
				i+=3;
			}
			if(arr.size()%3){
				cout<<m[arr[i+1]]<<" "<<m[arr[i-1]]<<" "<<m[arr[i]]<<"\n";
			}
		}
	}
	return 0;
}
