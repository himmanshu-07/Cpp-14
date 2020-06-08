#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll t;	cin>>t;
	while(t--){
		ll n,i,j,r=1;	cin>>n;
		if(n%2){
			for(i=0;i<n;i++){
				for(j=0;j<n;j++)
					cout<<(r++)<<" ";
				cout<<endl;
			}
		}
		else{
			for(i=0;i<n;i++){
				if(i%2==0){
					for(j=0;j<n;j++)
						cout<<(r++)<<" ";
				}
				else{
					cout<<(r+n-1)<<" ";
					for(j=1;j<n;j++)
						cout<<(r++)<<" ";
					r++;
				}
				cout<<"\n";
			}
		}
	}
	return 0;
}
