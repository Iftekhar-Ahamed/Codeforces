#include <iostream>
#include <algorithm>
using  namespace  std;
void take_input(int *arra,int n){
    int i;
    for(i=0;i<n;i++){
        cin>>arra[i];
    }
}
bool calculate(int *arra1,int *arra2,int n,int x){
    int i;
    for(i=0;i<n;i++){
        if(arra2[i]+arra1[i]>x)return false;
    }
    return true;
}
int main(){
    int t,n,x;
    cin>>t;
    while (t--){
        cin>>n>>x;
        int arra1[n],arra2[n];
        take_input(arra1,n);
        take_input(arra2,n);
        reverse(arra2,arra2+n);
        if(calculate(arra1,arra2,n,x))cout<<"Yes\n";
        else cout<<"No\n";

    }
    return 0;
}
