#include <bits/stdc++.h> 
using namespace std; 
typedef long long ll;

int findTrailingZeros(ll n) 
{ 
    ll count = 0; 
    for (ll i = 5; n / i >= 1; i *= 5) 
        count += n / i; 
    return count; 
}   

  
int main() 
{ 
    ll t;
    cin>>t;
    while(t--){
		ll n;
		cin>>n;
		cout<<findTrailingZeros(n)<<endl;
	}
	return 0;		
} 
