#include<bits/stdc++.h>
using namespace std;

int main(){

string str;
getline(cin,str);

set<char> st;

for(int i=0;i<str.length();i++)
{
    if(str[i]>='a' && str[i]<='z'){
        st.insert(str[i]);
    }
}
cout<<st.size()<<endl;
return 0;
}
