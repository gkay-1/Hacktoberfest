#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int t,n,i,sum;
	cin>>t;
	while(t--){
		sum=0;
		cin>>n;
		long long int p[n];
		for(i=0;i<n;i++){
			cin>>p[i];
		}
		sort(p,p+n);
		for(i=n-1;i>=0;i--){
			if(p[i]!=0){
				if(p[i]-n+1+i>=0){
					sum+=p[i]-n+1+i;
				}	
			}
		}
		cout<<sum%1000000007<<endl;
	}
	return 0;
}
