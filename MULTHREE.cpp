#include<bits/stdc++.h>
using namespace std;
typedef long long unsigned int ll;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll k,d0,d1,d2,sum;
		ll d[4];
		cin>>k>>d0>>d1;
        sum=0;
       
        d2=(d0+d1)%10;
        d[0]=(2*(d0+d1))%10;
        d[1]=(4*(d0+d1))%10;
        d[2]=(8*(d0+d1))%10;
        d[3]=(6*(d0+d1))%10;
        
        sum = d0+d1+d2+sum*((k-3)/4);
        if((k-3)%4!=0){
           ll r=(k-3)%4;
           for(ll i=0 ;i<r;i++){
               sum=sum+d[i];
           }
        }
        if(sum%3==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
	return 0;
}
		
