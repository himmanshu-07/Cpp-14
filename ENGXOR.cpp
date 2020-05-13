#include <bits/stdc++.h> 
using namespace std; 
typedef long long ll;
/*
ll BitsSetTable256[256]; 
void initialize()  
{    
    BitsSetTable256[0] = 0;  
    for (ll i = 0; i < 256; i++) 
    {  
        BitsSetTable256[i] = (i & 1) +  
        BitsSetTable256[i / 2];  
    }  
}  

ll countSetBits(ll n)  
{  
    return (BitsSetTable256[n & 0xff] +  
            BitsSetTable256[(n >> 8) & 0xff] +  
            BitsSetTable256[(n >> 16) & 0xff] +  
            BitsSetTable256[n >> 24]);  
}  													HIMANSHU PANDEY

ll countSetBits(ll n) 
{ 
    ll count = 0; 
    while (n) { 
        count += n & 1; 
        n >>= 1; 
    } 
    return count; 
}	*/

ll countSetBits(ll n) 
{ 
	ll count = 0; 
	while (n){
		n &= (n - 1); 
        count++; 
    } 
    return count; 
} 
  
  
  
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
		ll n,q;
		cin>>n>>q;
		ll a[n],b[n];
		ll count_e = 0,count_o = 0;
		for(ll i=0;i<n;i++){
			cin>>a[i];
			b[i] = countSetBits(a[i]);
			if(b[i]%2)
				count_o++;
			else
				count_e++;
		}
		while(q--){
			ll p;
			cin>>p;
			if((countSetBits(p))%2)
				cout<<count_o<<" "<<count_e<<"\n";
			else				
				cout<<count_e<<" "<<count_o<<"\n";
		}
	}
	return 0;
}
