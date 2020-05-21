#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		ll n = s.size();
		ll ans = 0, ques = 0;
		for(ll i=0;i<s.size();i++){
			if(s[i]=='<')
				ans++;
			if(s[i]=='>')
				ans--;
				
			if(ans == 0){
				ques = i+1;
			}
			
			if(ans<0){
				break;
			}
		}
		cout<<ques<<endl;
	}
	return 0;
}
