#include<bits/stdc++.h>

using namespace std;

main(){


int tc;
cin>>tc;
while(tc--){


   int n,k;
cin>>n>>k;

string s;

if(n%3==0){
    int val= n/3;
    while(val--){
        s+="abc";
    }


}
else{
    int val= n/3;
    int rem=n%3;
    while(val--){
        s+="abc";
    }
    if(rem>0){
        s+="a";
        rem--;
    }
    if(rem>0){
        s+="b";
    }

}
 cout<<s<<endl;
}
}
