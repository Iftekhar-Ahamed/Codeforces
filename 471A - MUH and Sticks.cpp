#include<bits/stdc++.h>
using namespace std;
bool checkpa(int arra[]){
    int i;
    for(i=0;i<10;i++)if(arra[i]>=4){arra[i]-=4;return true;}
    return false;
}
bool checkhati(int arra[]){
    int i;
    for(i=0;i<10;i++)
        if(arra[i]==2){arra[i]=0;return true;}
    return false;
}
int main(){
    int i,arra[10],n;
    bool pa=false;
    memset(arra,0,sizeof (arra));
    for(i=0;i<6;i++){
        cin>>n;
        arra[n]++;
    }
    pa=checkpa(arra);
    if(pa&&checkhati(arra))cout<<"Elephant\n";
    else if(pa)cout<<"Bear\n";
    else cout<<"Alien\n";
    //main();
    return 0;
}
