#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll a[n],odd,even,sol;
		odd=even=sol=0;
		for(ll i=0;i<n;i++){
			cin>>a[i];
			if(a[i]%2)
				odd++;
			else
				even++;
		}
		cout<<odd*even<<endl;
	}
	return 0;
}
