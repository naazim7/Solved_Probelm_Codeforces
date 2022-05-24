#include<bits/stdc++.h>
using namespace std;

int main(){

int tc,n,pw,x;
cin>>tc;

while(tc--){

cin>>n;

for(int k=2;k<=1e8;k++){

    pw=pow(2,k)-1;
if(n%pw==0){
    cout<<n/pw<<endl;
    break;
}
}
}

}


