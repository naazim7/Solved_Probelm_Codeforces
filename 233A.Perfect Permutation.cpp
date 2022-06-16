#include<bits/stdc++.h>
using namespace std;

int main(){

int x;
cin>>x;

if(x%2){
    cout<<"-1"<<endl;
}
else{
    for(int i=1;i<=x;i++){
     if(i%2){
        cout<<i+1;
     }
     else{
        cout<<i-1;
     }
     if(i!=x)
     {
       cout<<' ';
     }

    }
    cout<<'\n';

}

}
