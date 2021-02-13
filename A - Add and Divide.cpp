#include<bits/stdc++.h>
using namespace std;
long int solve(long int a,long int b,long int c){
    while(a>0){
        a=a/b;
        c++;
    }
    return c;
}
int main(){
    long int t,n1,n2,pev=10e7,now,c=0,x;
    cin>>t;
    while(t--){
        c=0;pev=10e7;
        cin>>n1>>n2;
        if(n2==1){c++;n2+=1;}
        while(1){
            now=solve(n1,n2,c);
            if(now>pev){
                cout<<pev<<endl;
                break;
            }
            pev=now;
            c++;
            n2++;
        }
    }
    return 0;
}
