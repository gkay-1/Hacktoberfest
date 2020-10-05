#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,i,f,index,count;
    cin>>t;
    while(t--){
        f=0;
        count=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=0;i<n;i++){
            if(a[i]==1){
                f=1;
                index=i;
                break;
            }
        }
        if(i==n-1){
			cout<<"YES"<<endl;	
		}
        for(i=index+1;i<n;i++){
            if(a[i]==1){
                f=1;
                if(count<5){
                    cout<<"NO"<<endl;
                    break;
                }
                else{
                    count=0;
                    if(i==n-1){
						cout<<"YES"<<endl;
					}
                }
            }
            else{
                f=0;
                count++;
                if(i==n-1){
					cout<<"YES"<<endl;
				}
            }
        }	
    }
    return 0;
}
