#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,speed,count = 1;
		cin>>n;
		ll a[n];
		cin>>a[0];
		speed = a[0];
		for(int i=1;i<n;i++){
			cin>>a[i];
			if(a[i]<speed)
			count++;
			speed = min(speed,a[i]);
		}
		cout<<count<<endl;
	}
	return 0;
}
