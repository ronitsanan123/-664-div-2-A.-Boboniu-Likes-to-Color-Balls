#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int r,g,b,w;
		cin>>r>>g>>b>>w;
		int count=0;
	long long int val=min(r,min(g,b));
		if(r%2!=0){
			count++;
		}
		if(g%2!=0){
			count++;
		}
		if(b%2!=0){
			count++;
		}
		if(w%2!=0){
			count++;
		}
		if(count<=1){
				cout<<"YES"<<endl;
		}
		else if(val!=0){
			
			r--;
			g--;
			b--;
			w+=3;
			count=0;
				if(r%2!=0){
			count++;
		}
		if(g%2!=0){
			count++;
		}
		if(b%2!=0){
			count++;
		}
		if(w%2!=0){
			count++;
		}
			if(count<=1){
				cout<<"YES"<<endl;
		}
		else
		cout<<"NO"<<endl;
		}
		else
		cout<<"NO"<<endl;
	}
	return 0;
}
