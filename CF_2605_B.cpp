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
		map <ll,ll> m;
		for(ll i=0;i<n;i++){
			cin>>a[i];
			m[a[i]]++;
		}
		ll present = 1;
		map <ll,ll> :: iterator itr;
		ll tmp = 0;
		itr = m.begin();
		for(itr;itr!=m.end();itr++){
			if((itr->first)<=(present+tmp+((itr->second)-1))){
				present += ((itr->second)+tmp);
				tmp = 0;
			}
			else
				tmp += itr->second;
		}
		
		cout<<present<<"\n";
	}
	return 0;
}
