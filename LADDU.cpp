#include <bits/stdc++.h> 
using namespace std; 
typedef long long ll;

int main() 
{ 
    ll t;
    cin>>t;
    while(t--){
		ll act,rank,severity,score = 0;
		string origin,s;
		cin>>act>>origin;
		for(ll i=0;i<act;i++){
			cin>>s;
				if(s == "CONTEST_WON"){		
					cin>>rank;
					if(rank<20)
						score += 300 + (20-rank);
					else
						score += 300;
					}
										
				else if(s ==  "TOP_CONTRIBUTOR"){
					score += 300;
				}
										
				else if(s ==  "BUG_FOUND"){
					cin>>severity;
					score += severity;
				}									
				else 
					score += 50;
														
			}
	//		cout<<score<<endl;
		if(origin == "INDIAN")
			cout<<score/200<<endl;
		else
			cout<<score/400<<endl;
	}
	return 0;		
} 
