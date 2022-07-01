#include<bits/stdc++.h>
using namespace std;

main(){

int a,b,c;

cin>>a>>b>>c;

int ex1= a+b+c;
int ex2= (a+b)*c;
int ex3= a*(b+c);
int ex4= a*b*c;
int max1= max(ex1,ex2);
int max2= max(ex3,ex4);
cout<<max(max1,max2)<<endl;



}


/*1+2*3=7
1*(2+3)=5
1*2*3=6
(1+2)*3=9
*/

