#include<bits/stdc++.h>
using namespace std;
int main(){
    int total=0,n,m,q,p,i;
    cin>>n>>m;
    int arra[n];
    for(i=0;i<n;i++)scanf("%d",&arra[i]);
    sort(arra,arra+n);
    while(m>0){
        total++;
        m-=arra[--n];
    }
    cout<<total<<endl;
    //main();
    return 0;
}
