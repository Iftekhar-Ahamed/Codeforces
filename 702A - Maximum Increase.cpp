#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,number,i,m=1,pev,count=1;
    cin>>n;
    cin>>number;
    pev=number;
    n-=1;
    while(n--){
        cin>>number;
        //cout<<number<<" "<<pev<<" "<<count<<endl;
        if(number>pev)count++;
        else {
            if(m<count)m=count;
            count=1;
        }
        pev=number;
    }
    if(count>m)m=count;
    printf("%d\n",m);
    //main();
    return 0;
}
