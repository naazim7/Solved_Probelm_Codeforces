
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
main(){

ll n,q,r1=0,r2=0,x;

cin>>n;
ll arr[n];
for(int i=0;i<n;i++){
    cin>>x;
    arr[x]=i;


}
cin>>q;
while(q--){
    cin>>x;
    r1+=arr[x]+1;
    r2+=n-arr[x];
}
cout<<r1<<' '<<r2<<endl;

}
