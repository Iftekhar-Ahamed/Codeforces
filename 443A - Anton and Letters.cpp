#include<bits/stdc++.h>
using namespace std;
int main(){
    char c;
    bool arra[200];
    int cou=0;
    memset(arra,true,sizeof arra);
    while(scanf("%c",&c)==1&&c!='\n'){
        if(c>='a'&&c<='z'){
            if(arra[c]){
                cou++;
                arra[c]=false;
            }
        }
    }
    cout<<cou<<endl;
    return 0;
}
