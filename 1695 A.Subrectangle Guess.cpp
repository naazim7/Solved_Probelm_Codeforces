#include<bits/stdc++.h>
using namespace std;

int main(){

int tc;
cin>>tc;
while(tc--){

    int arr[50][50];
    int h,w,i,j,mxi=0,mxj=0;
    cin>>h>>w;
    for(i=0;i<h;i++){
        for(j=0;j<w;j++){
            cin>>arr[i][j];
            if(arr[mxi][mxj]<arr[i][j]){
                mxi=i;
                mxj=j;
            }
        }
    }
    cout<<max(mxi+1,h-mxi)*max(mxj+1,w-mxj)<<endl;
}
}
