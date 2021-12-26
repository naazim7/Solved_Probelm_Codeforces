#include<bits/stdc++.h>
using namespace std;

int main(){

int lucky[12]={4,7,47,74,44,444,447,474,477,777,774,744};
int n,flag=0;
cin>> n;
for(int i=0;i<12;i++){
    if(n%lucky[i]==0){
        flag=1;
    }
}
if(flag){
    cout<<"YES"<<endl;

}
else{
    cout<< "NO"<<endl;
}


return 0;
}
