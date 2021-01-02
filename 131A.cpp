#include<bits/stdc++.h>
using namespace std;
bool check(string s)
{
    int i,n=s.size();
    if(s[0]>='a'&&s[0]<='z'){
        for(i=1;i<n;i++){
            if(!(s[i]>='A'&&s[i]<='Z'))return false;
        }
    }else{
        for(i=0;i<n;i++){
            if(!(s[i]>='A'&&s[i]<='Z'))return false;
        }
    }
    return true;
}
int main(){
    string s;
    cin>>s;
    int i,n=s.size();
    if(!check(s))cout<<s<<endl;
    else {
        for(i=0;i<n;i++){
            if(s[i]>='a'&&s[i]<='z'){
                printf("%c",s[i]-32);
            }else{
                printf("%c",s[i]+32);
            }
        }
    }

return 0;
}
