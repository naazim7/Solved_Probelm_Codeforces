#include<bits/stdc++.h>
using namespace std;

int main(){

int tc,a,b;
int maxa=0,maxb=0;
string f,w;
vector<int> v1,v2;

cin>>tc;
while(tc--)

{
    int tmp;
    cin>>a;
    for(int i=0;i<a;i++){
            cin>>tmp;
      v1.push_back(tmp);

    }
    cin>>b;
    for(int i=0;i<b;i++){
            cin>>tmp;
      v2.push_back(tmp);

    }
     maxa = *max_element(v1.begin(), v1.end());
     maxb = *max_element(v2.begin(), v2.end());

     if(maxa==maxb){
        f="Alice";
        w="Bob";
     }
     else if(maxa>maxb){
        f="Alice";
        w="Alice";
     }
else{
    f="Bob";
    w="Bob";

}

 cout<<f<<"\n"<<w<<endl;
v1.clear();
v2.clear();
maxa=0;
maxb=0;
}

}
