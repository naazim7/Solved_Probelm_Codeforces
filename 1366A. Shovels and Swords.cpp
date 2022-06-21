#include<bits/stdc++.h>
using namespace std;

main(){

int tc;
cin>>tc;

while(tc--)
{

    int s,d,sw,sl;
    cin>>s>>d;
    sw=(s+d)/3;

  sl=min(s,d);
    cout<<min(sw,sl)<<endl;

}
}
//To craft a shovel, Polycarp spends two sticks and one diamond; to craft a sword, Polycarp spends two diamonds and one stick.
