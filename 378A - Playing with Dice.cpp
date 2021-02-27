#include<bits/stdc++.h>
#define lld long long int
using namespace std;
int main()
{
    lld p1,p2,i,c1=0,c2=0,d=0;
    cin>>p1>>p2;
    for(i=1;i<=6;i++){
        if(abs(p1-i)>abs(p2-i))c2++;
        else if(abs(p1-i)<abs(p2-i))c1++;
        else d++;
    }
    cout<<c1<<" "<<d<<" "<<c2<<endl;
return 0;
}
