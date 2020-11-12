#include<iostream>
#include<fstream>
using namespace std;

int main(){
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);

int m,n,i;
char gen1='G',gen2='B';
cin>>m>>n;
int total=n+m,a=n,b=m;

if(m>n){
    gen1='B';
    a=m;
    gen2='G';
    b=n;
}

for(i=0;i<total;i++){
    if(a){
        cout<<gen1;
        a--;
    }
    if(b){
        cout<<gen2;
        b--;
    }
}
cout<<endl;

return 0;
}
