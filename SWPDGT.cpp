#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll a,b;
		cin>>a>>b;
		ll p,q,r,s;
		q = a%10;
		p = a/10;
		s = b%10;
		r = b/10;
		ll sum=0;
		if(s>p&&p){
			sum = ((s*10)+q);
			sum += (r*10)+p;
		}
		else if(q>r&&r){
			sum = (q*10)+s;
			sum += (p*10)+r;
		}
		else
			sum =a+b;
		cout<<sum<<endl;
	}
	return 0;
}
