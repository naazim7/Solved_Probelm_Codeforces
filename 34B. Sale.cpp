#include<bits/stdc++.h>
using namespace std;
main(){



int tv,c;

cin>>tv>>c;
int arr[tv];
for(int i=0;i<tv;i++) cin>>arr[i];
sort(arr,arr+tv);



/*
for(int i=0;i<tv;i++){
        cout<<arr[i]<<' ';
}
cout<<endl;


*/
int mo=0;
for(int i=0;i<c;i++){
if(arr[i]>=0) break;
        mo+=(abs(arr[i]));

}
cout<<mo<<endl;


}

//6 6
//756 -611 251 -66 572 -818
