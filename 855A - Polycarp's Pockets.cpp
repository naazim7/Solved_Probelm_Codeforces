#include<bits/stdc++.h>
using namespace std;

main(){

int tc;



cin>>tc;
while(tc--)

{
    map<string,int> m;
    m.clear();
    string str;
    cin>>str;


   if(m.count(str)){
    cout<< "YES"<<endl;

   }
   else {
     cout<<"NO"<<endl;

   }
   m[str]++;

}



}
