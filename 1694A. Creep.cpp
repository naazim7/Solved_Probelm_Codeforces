#include<bits/stdc++.h>
using namespace std;

main(){

int tc,a,b;
cin>>tc;
while(tc--){


cin>>a>>b;
bool turn=true;
while(a>0 || b>0){


if(turn)
{

    if(a>0){
        cout<<'0';
        a--;
    }
    else{
        cout<<'1';
        b--;
    }
}
else{
        if(b>0){
            cout<<'1';
            b--;
        }
        else{
            cout<<'0';
            a--;

        }


}

  turn^=true;

}
cout<<endl;

}
}
