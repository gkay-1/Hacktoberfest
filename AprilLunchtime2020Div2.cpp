#include<bits/stdc++.h>
#define ll long long;
using namespace std;
int main(){
    int t,n,s,i;
    cin>>t;
    while(t--){
        vector<pair<int,int>> pt;
        cin>>n>>s;
        int p[n],pl[n],sum=0,f=0,g=0;
        for(i=0;i<n;i++){
            cin>>p[i];
        }
        for(i=0;i<n;i++){
            cin>>pl[i];
        }
        for(i=0;i<n;i++){
            pt.push_back(make_pair(p[i],pl[i]));
        }
        sort(pt.begin(),pt.end());
        for(i = 0; i < n; i++)
        {
            if(pt[i].second==0){
                f=1;
                sum+=pt[i].first;
                break;
            }
        }
        for(i = 0; i < n; i++)
        {
            if(pt[i].second==1){
                g=1;
                sum+=pt[i].first;
                break;
            }
        }
        
        if(sum<=(100-s) && (f==1) && (g==1))
        {
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
        
    }
    
    return 0;
}
