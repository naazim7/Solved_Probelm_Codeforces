#include<bits/stdc++.h>
using namespace std;

main(){


int tc,n,data;
cin>> tc;

while(tc--){
 cin>>n;

 map<int ,int> m;
 for(int i=0;i<n;i++){
    cin>>data, m[data]++;


 }
 int ans=-1;

 for( auto it=m.begin();it!=m.end();++it){
        if(it->second>=3)
        {
            ans=it->first;
            break;
        }

 }
 cout<<ans<<endl;





}



}
