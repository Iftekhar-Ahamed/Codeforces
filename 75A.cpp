#include <bits/stdc++.h>
using namespace std;
string remove0(string s){
    int i;
    string x;
    for(i=0;i<s.size();i++)if(s[i]!='0')x+=s[i];
return x;
}
int convert(string s){
    stringstream x(s);
    int r;
    x>>r;
    return r;
}
int main(){
    string s1,s2,s3;
    int i,a,b;
    cin>>s1>>s2;
    a=convert(remove0(to_string(convert(s1)+convert(s2))));
    b=convert(remove0(s1))+convert(remove0(s2));
    if(a==b)cout<<"YES";
    else cout<<"NO";
    return 0;
}
