#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,x,y;
		x=y=0;
		cin>>n;
		string s;
		cin>>s;
		bool flag = false;
		//	cout<<int('1')<<endl<<int('0')<<endl;
		for(ll i=0;i<(2*n);i++){
			if(i%2==0){
				x+=(int(s[i])-48);
				ll k= (i/2-y);
				ll l= ((i/2)+1-x);
				if((x+k>n) ||(l+y>n)){
					flag = true;
					cout<<i+1<<endl;
					break;
				}
			}
			else{
				y+=(int(s[i])-48);
				ll k= ((i+1)/2-x);
				ll l=((i+1)/2 - y);
				if((y+k>n) || (l+x>n) ){
					flag = true;
					cout<<i+1<<endl;
					break;
				}				
			}
		}
		if(!flag)
			cout<<2*n<<endl;
	}
	return 0;
}
