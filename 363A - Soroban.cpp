#include<bits/stdc++.h>
#define read freopen("input.txt", "r", stdin)
#define write freopen("output.txt", "w", stdout)
#define lld long long int
using namespace std;
void solve(int x){
    int i=1;
    if(x>=5){
        printf("-O|");
        x-=5;
    }else{
        printf("O-|");
    }
    if(x==0)printf("-OOOO");
    else
    while (i<5)
    {
        if(i==x)printf("O-");
        else printf("O");
        i++;
    }
    printf("\n");
}
int main(){
    //read;write;
    string s;
    cin>>s;
    int i=s.size()-1;
    while (i>-1)
    {
        solve(s[i]-'0');
        i--;
    }
    


    return 0;
}
