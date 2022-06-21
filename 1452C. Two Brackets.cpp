#include<bits/stdc++.h>
using namespace std;

main(){

int tc;
cin>>tc;
while(tc--){
  string s;
  cin>>s;
  int n,i;
  n=s.size();
  int moves=0;
  int openf=0,opens=0;

  for(int i=0;i<n;i++){
        if(s[i]=='('){
            openf++;
        }
        else if(s[i]=='['){
            opens++;
        }
        else if(s[i]==')'){

            if(openf>=1){
                moves++;
                openf--;
            }
        }
        else if(s[i]==']'){
            if(opens>=1){
                moves++;
                opens--;
            }
        }

// ([])

  }
cout<<moves<<endl;

}
}
