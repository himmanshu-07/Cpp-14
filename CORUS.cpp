#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,q,c;
		cin>>n>>q;
		map <char,ll> m;
		map <char,ll> :: iterator itr;
		string s;
		cin>>s;
		for(ll i=0;i<n;i++)
			m[s[i]]++;
		while(q--){
			ll count = 0;
			cin>>c;
			for(itr = m.begin();itr!=m.end();itr++){
				if(itr->second - c >0)
					count += (itr->second - c);
			}
			cout<<count<<"\n";
		}
	}
	return 0;
}
			
