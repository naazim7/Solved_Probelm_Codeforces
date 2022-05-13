
#include<bits/stdc++.h>

using namespace std;

main()
{


int tc;
cin>>tc;
while(tc--)
{


    int n;
cin>>n;

if(n>=1900){
    cout<<"Division 1"<<endl;
}
else if(n>=1600 && n<=1899){
        cout<<"Division 2"<<endl;
}
else if(n>=1400 && n<=1599){
         cout<<"Division 3"<<endl;
}
else if(n<=1399){
          cout<<"Division 4"<<endl;
}

}


}
