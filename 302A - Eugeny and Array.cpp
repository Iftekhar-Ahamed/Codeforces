#include<bits/stdc++.h>
#define read freopen("input.txt", "r", stdin)
#define write freopen("output.txt", "w", stdout)
#define lld long long int
using namespace std;

int main(){
    //read;write;
    int n,q,x,c=0,c1=0,l,r,a;
    scanf("%d%d",&n,&q);
    while (n--)
    {
        scanf("%d",&x);
        if(x==1)c++;
        else c1++;
    }
    a=min(c,c1)*2;
    while (q--)
    {
        scanf("%d%d",&l,&r);
        x=r-l+1;
        printf(x%2==0&&x<=a?"1\n":"0\n");
    }
    return 0;
}
