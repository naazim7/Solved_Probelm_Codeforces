#include<bits/stdc++.h>
using namespace std;

const int N=1000001;
vector<bool> primes(N,1);
void sieve(){
primes[0]=primes[1]=false;
for(int i=2;i<N;i++){

    if(primes[i]==true){
        for(int j=2*i;j<N;j+=i){
            primes[j]=false;
        }
    }
}
}


main(){
sieve();
int n;
cin>>n;

while(n--){

    long long x;
    cin>>x;
    long long r=sqrt(x);
    if(primes[r] && r*r==x ){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}


}
