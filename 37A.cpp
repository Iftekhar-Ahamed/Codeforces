#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,i,num,count=0;
    scanf("%d",&n);
    int arra[1010],max=-1;
    memset(arra,0,sizeof arra);
    for(i=0;i<n;i++){
        scanf("%d",&num);
        if(arra[num]==0){
            count++;
            arra[num]+=1;
        } else{
            arra[num]+=1;
        }
        if(arra[num]>max){
            max=arra[num];
        }
    }
    printf("%d %d\n",max,count);
    return 0;
}
