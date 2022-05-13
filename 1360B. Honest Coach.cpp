#include<bits/stdc++.h>

using namespace std;

main(){


int tc,arr[53];

cin>>tc;

while(tc--){
int mi=1005;

    int n;

    cin>>n;


for(int i=0;i<n;i++){

    cin>>arr[i];
}
sort(arr,arr+n);
for(int j=0;j<n-1;j++){
    mi=min(mi,arr[j+1]-arr[j]);
}

cout<<mi<<endl;
}

}
