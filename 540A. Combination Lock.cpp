#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
int n;

string s1,s2;
cin>>n;
cin>>s1>>s2;
int result=0;
for(int i=0;i<n;i++)

{

result+=min( 10-abs(s1[i]-s2[i] ) ,abs(s1[i]-s2[i]));
}

cout<<result<<endl;

}
