#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll tc;
	cin>>tc;
	while(tc--){
		ll t,j;
		cin>>t;
		ll p = t;
		if(t&1){
			cout<<(t/2)<<"\n";
			continue;
		}
		else{
			j = 2;
			while((t&1)==0){
				t = (t>>1);
				j*=2;
			}
			cout<<(p/j)<<"\n";
		}
	}
	return 0;
}
