#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,k;
		cin>>n>>k;
		ll p=k;
		vector<char> v;
		char x;
		map<char,ll> m;
		for(int i=0;i<n;i++){
			cin>>x;
			v.push_back(x);
			m[x]++;
		}
		if(m['H']==n){
			cout<<"0\n";
			continue;
		}
		ll count=0;
		while(k--){
			x = v[v.size()-1];
			if(x=='H'){
				for(ll i=0;i<v.size();i++)
					if(v[i]=='H')
						v[i]='T';
					else
						v[i]='H';				
			}
			v.pop_back();
		}
		for(ll i=0;i<(n-p);i++)
			if(v[i]=='H')
				count++;

				
		cout<<count<<endl;
	}
	return 0;
}
