#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		string s;
		cin>>s;
		ll x=0,y=0;
		ll i=0;
		do{
			if(s[i]==s[i-1]&&i!=0)
				continue;
			if(s[i]=='L')
				x--;
			else if(s[i]=='R')
				x++;
			else if(s[i]=='U')
				y++;
			else
				y--;
		}while(i<n);	
		
		cout<<x<<" "<<y<<endl;
	}
	return 0;
}
