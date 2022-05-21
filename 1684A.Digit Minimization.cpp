#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
string s;
cin>>tc;
while(tc--){
    cin>>s;



        if(s.size()==2) cout<<s[1]<<endl;
else{
    sort(s.begin(),s.end());
    cout<<s[0]<<endl;
}


}




}
