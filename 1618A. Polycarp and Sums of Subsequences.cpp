
#include<bits/stdc++.h>

using namespace std;
main(){

int tc;
cin>>tc;

while(tc--){


    int arr[7];
    for(int i=0;i<7;i++) cin>>arr[i];
    cout<<arr[0]<<" "<< arr[1]<<" "<<arr[6]-arr[0]-arr[1]<<endl;

}
}
