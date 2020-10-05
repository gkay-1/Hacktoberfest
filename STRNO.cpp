#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int t;
	cin>>t;
	while(t--){
		long long int x,k,i,count=0;
		cin>>x>>k;
		if(pow(2,k)==x){
			cout<<1<<endl;
		}
		else if(pow(2,k)<x){
			while(x%2==0){
				count++;
				x=x/2;
			}
			for(i=3;i<=sqrt(x);i+=2){
				while(x%i==0){
					count++;
					x=x/i;
				}
			}
			if(x>2){
				count++;
			}
			if(count>=k){	
				cout<<1<<endl;
			}
			if(count<k){	
				cout<<0<<endl;
			}
		}
		else{
			cout<<0<<endl;
		}
	}
	return 0;
}
