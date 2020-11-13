#include <iostream>
using namespace std;

int main(){
char x;
while(1){
    scanf("%c",&x);
    if(x=='\n')break;
    if(x>=65&&x<=90){
        x=x+32;
    }
    if(x=='a' || x=='y' || x =='e' || x=='i' || x=='o' || x=='u'){
        continue;
    }else{
      cout<<"."<<x;
    }
}
cout<<endl;
return 0;
}
