#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int i;
    bool AB=false,BA=false;
    cin>>s;
    for(i=0;i<s.size()-1;i++){
        if(s[i]=='A'&&s[i+1]=='B'&&!AB){AB=true;++i;}
        else if(s[i]=='B'&&s[i+1]=='A'&& AB){BA=true;++i;}
    }
    if(AB&&BA){cout<<"YES\n";return 0;}

    AB=BA=false;
    for(i=0;i<s.size()-1;i++){
        if(s[i]=='B'&&s[i+1]=='A'&&!BA){BA=true;++i;}
        else if(s[i]=='A'&&s[i+1]=='B'&&BA){AB=true;++i;}
    }
    if(AB&&BA)cout<<"YES\n";
    else cout<<"NO\n";
    //main();
    return 0;
}
