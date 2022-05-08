#include<bits/stdc++.h>

using namespace std;

main(){

int tc,angle;

cin>>tc;

while(tc--)
{

    cin >> angle;
    if(360%(180-angle)==0)
    {
        cout<< "YES"<<endl;
    }
    else{
        cout<< "NO"<<endl;
    }

    }


}






