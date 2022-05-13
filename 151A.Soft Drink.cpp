#include<bits/stdc++.h>
using namespace std;
int smallest(int x, int y, int z){
  return x < y ? (x < z ? x : z) : (y < z ? y : z);
}

main(){

int n, k, l, c, d, p, nl, np;

cin>>n>>k>>l>>c>>d>>p>>nl>>np;

int toast=(k*l)/nl;
int limes= c*d;
int salt= p/np;
cout<< smallest(toast,salt,limes) / n;

}
