#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		ll k,x;
		cin>>k>>x;
		map<char,ll> m;
		m['g']=1;
		m['o']=2;
		m['d']=1;
		for(int i=0;i<s.size();i++)
		{
			m[s[i]]++;
		}
		int count = 0;
		vector <int> v;
		map<char,ll>::iterator itr;
		for(itr=m.begin();itr!=m.end();itr++){
			if(itr->second<=x)
				count++;
				else
				v.push_back(itr->second-x);
		}
		sort(v.begin(),v.end());
		ll i=0;
		while(i<v.size()&&k>0){
			k-=v[i];
			if(k>=0)
			count++;
		}
		cout<<count<<endl;
	}
	return 0;
}
