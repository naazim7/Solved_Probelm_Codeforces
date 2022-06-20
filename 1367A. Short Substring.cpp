#include<bits/stdc++.h>
using namespace std;
main(){

    int tc;
    cin>>tc;
    while(tc--){

    string s1,s2;
    cin>>s1;
    for(int i=0;i<s1.length();i++){



        if(i%2 || i==0 || i==1 ){
            s2+=s1[i];
        }
    }
    cout<<s2<<endl;
    }


}
