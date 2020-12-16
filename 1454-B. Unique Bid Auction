#include<bits/stdc++.h>
using namespace std;

int main(){
int n,t,i,number;
scanf("%d",&t);
while(t--){
    scanf("%d",&n);
    int arra[n][2];
    bool flag(true);
    memset(arra,0,sizeof(arra));
    for(i=0;i<n;i++){
        scanf("%d",&number);
        arra[number-1][0]++;
        arra[number-1][1]=i+1;
    }
    for(i=0;i<n;i++){
        if(arra[i][0]==1){
            flag=false;
            break;
        }
    }
    if(!flag)printf("%d\n",arra[i][1]);
    else printf("-1\n");

}
return 0;
}
