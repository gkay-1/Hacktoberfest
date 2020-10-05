#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(){
	ll t,n,q,i;
	cin>>t;
	while(t--){
	    //cout<<t;
	    cin>>n>>q;
	    ll f[q],d[q],sum=0;
	    for(i=0;i<q;i++){
	        cin>>f[i]>>d[i];
	        sum+=abs(f[i]-d[i]);
	    }
	    sum+=f[0];
	    for(i=0;i<q-1;i++){
	        sum+=abs(d[i]-f[i+1]);
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
