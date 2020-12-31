#include <bits/stdc++.h>
using namespace std;

int main()
{
    string num;
    cin>>num;
    int i,n=num.size();
    for(i=0;i<n;i++){
        if(num[i]=='1'&&num[i+1]=='4'&&num[i+2]=='4')i+=2;
        else if(num[i]=='1'&&num[i+1]=='4')++i;
        else if(num[i]=='1')continue;
        else break;
    }
    if(i<n)printf("NO\n");
    else   printf("YES\n");
    return 0;
}
