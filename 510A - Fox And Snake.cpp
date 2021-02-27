#include<bits/stdc++.h>
#define lld long long int
using namespace std;
int main()
{
    lld r,c,i,j;
    bool flag=true;

    cin>>r>>c;

    for(i=1;i<=r;i++){

        if(i%2==0){
            if(flag){
                for(j=1;j<c;j++)cout<<".";
                cout<<"#\n";
                flag=false;
            }else{
                cout<<"#";
                for(j=1;j<c;j++)cout<<".";
                cout<<endl;
                flag=true;
            }
        }else{
            for(j=1;j<=c;j++)cout<<"#";
            cout<<endl;
        }
    }
 //main();
return 0;
}
