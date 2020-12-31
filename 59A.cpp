#include <bits/stdc++.h>
using namespace std;

int main()
{
    string num;
    cin>>num;
    int i,n=num.size(),low=0,high=0;

    for(i=0;i<n;i++)
    if(num[i]>='a'&&num[i]<='z')low++;
    else if(num[i]>='A'&&num[i]<='Z') high++;

    if(low<high){
            for(i=0;i<n;i++)
    if(num[i]>='a'&&num[i]<='z')printf("%c",num[i]-32);
    else printf("%c",num[i]);
    }else{
        for(i=0;i<n;i++)
     if(num[i]>='A'&&num[i]<='Z')printf("%c",num[i]+32);
     else printf("%c",num[i]);
    }
    printf("\n");
    return 0;
}
