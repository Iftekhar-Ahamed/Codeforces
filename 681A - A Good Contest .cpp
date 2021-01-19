#include<bits/stdc++.h>
using namespace std;
int main(){
    string user;
    int n,before,after;
    bool flag=false;
    cin>>n;
    while(n--){
        cin>>user>>before>>after;
        if(before>=2400&&(after-before)>0)flag=true;
    }
    if(flag)cout<<"YES\n";
    else cout<<"NO\n";
    //main();
    return 0;
}
