/***
**      Bismillahir Rahmanir Rahim
**              ALLAHU AKBAR
**
**     Author: Iftekhar Ahamed Siddiquee
**     Bangladesh University of Business and Technology,
**     Dept. of CSE.
***/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
using namespace std;

#define read freopen("0_input.txt","r",stdin)
#define write freopen("0_output.txt","w",stdout)
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int uint64;
#define lld long long int
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define mXs 1e6
#define test long long int ct;cin >> ct;while (ct--)
const double pi = acos(-1.0);


void make0(int arra[],int n)
{
   for(int i=0;i<n;i++)arra[i]=0;
}
void max_cal(int arra[],int n,int &max,int &pos){
    int i;
    max=arra[0];
    pos=0;
    for(i=1;i<n;i++){
        if(max<arra[i]){
            pos=i;
            max=arra[i];
        }
    }
}
void bfs(int x,vector<int>list[],int n){
    queue<int>trace;
    trace.push(x);
    map<int,bool>visit;
    visit[x]= true;
    int level[n],i;
    make0(level,n);
    level[x]=0;
    while (!trace.empty()){
        x=trace.front();
        for(i=0;i<list[x].size();i++){
            if(!visit[list[x][i]]){
                visit[list[x][i]]= true;
                level[list[x][i]]=level[x]+1;
                trace.push(list[x][i]);
            }
        }
        trace.pop();
    }
    int count[n];
    make0(count,n);
    for(i=0;i<n;i++){
        if(level[i]!=0)count[level[i]]++;
    }
    int max,pos;
    max_cal(count,n,max,pos);
    if(max==0)printf("0\n");
    else{
        printf("%d %d\n",max,pos);
    }
}
int main(){
        int i,n,m,j,temp;
        cin>>n;
        vector<int>list[n];

        //input part:-
        for(i=0;i<n;i++){
            cin>>m;
            for(j=0;j<m;j++){
                cin>>temp;
                list[i].push_back(temp);
            }
        }

        //calculation part:-
        cin>>m;
        while (m--){
            cin>>temp;
            bfs(temp,list,n);
        }
        
    return 0;
}
/*
* do something instead of nothing and stay organized
* WRITE STUFF DOWN
* DON'T GET STUCK ON ONE APPROACH
*/
/* Final check before submit :
1. array size or integer overflow,like uninitialised 0 index.
2. Think twice,code once.check all possible counter test case.
3. Be careful about corner case! n=1?k=1? something about 0?
4. avoid stupid mistake!complexity(t/m)?precision error?submit same code twice?
5. if got WA than remember that you are missing something common.
*** Be confident!!! who knows? may be your one step back to AC ***
4. minus mod ans=(ans-k+mod)%mod;
*/
/* IF WA???
1. corner case! n=1?k=1? something about 0?
2. check code(avoid stupid mistake)
3. read the statement again(if there any missing point???)
4. check the idea(check all possible counter test case again!!!)
5. be calm,don't be panic!!!.(***this problem not going to decide your future***)
6. don't waste too much time. move to next problem
*/