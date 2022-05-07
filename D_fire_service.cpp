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

#define read freopen("input.txt","r",stdin)
#define write freopen("output.txt","w",stdout)
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

int control[2][4]={{-1,1,0,0},{0,0,1,-1}};
int main()
{
    cin.tie(NULL);
    read;
    write;
    ios_base::sync_with_stdio(false);
    
    lld n,m,k,x,y;
    cin>>n>>m;
    vector<vector<int>>level(n,vector<int>(m,0));
    cin>>k;
    queue<pair<int,int>>trace;
    while (k--)
    {
        cin>>x>>y;
        level[x-1][y-1]=1;
        trace.push({x-1,y-1});
    }
    lld maxx=-1,ansx=0,ansy=0;
    while (!trace.empty())
    {
        x=trace.front().first,y=trace.front().second;
        trace.pop();
        for(lld i=0;i<4;i++){
            lld r=x+control[0][i],c=y+control[1][i];
            if(r<n && c<m && r>=0 && c>=0 && level[r][c]==0){
                trace.push({r,c});
                level[r][c]=level[x][y]+1;
                if(maxx<level[r][c]){
                    maxx=level[r][c];
                    ansx=r,ansy=c;
                }
            }
        }
    }
    cout<<ansx+1<<" "<<ansy+1<<endl;
    
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