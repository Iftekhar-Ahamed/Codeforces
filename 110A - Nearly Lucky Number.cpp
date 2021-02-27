#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[50];
    int l,c=0,i;
    scanf("%s",&ch);
    l = strlen(ch);
    for(i=0;i<l;i++){
        if(ch[i]=='4'||ch[i]=='7'){
            c++;
        }
    }
       if(c==4||c==7){
        printf("YES\n");
    }
        else{
        printf("NO\n");
    }

return 0;
}
