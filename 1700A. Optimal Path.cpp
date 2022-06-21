#include<bits/stdc++.h>
using namespace std;

main(){

int tc;
cin>>tc;
while(tc--){

    int n,m;
    cin>>n>>m;
    long long int ans=0;
    for(int i=1;i<=m;i++){
        ans+=i;
    }

    // 1-->2--->3=6
    // 6+2*3=12

    for(int i=2;i<=n;i++){
        ans=ans+i*m;
    }
    cout<<ans<<endl;
}

}
