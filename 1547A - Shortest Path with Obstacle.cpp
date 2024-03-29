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
const int mXs = 1e7;
const double pi = acos(-1.0);
lld solve(){
    lld ara[3][2],i;
    for(i=0;i<3;i++){
        cin>>ara[i][0]>>ara[i][1];
    }
    lld cost=abs(ara[1][0]-ara[0][0])+abs(ara[1][1]-ara[0][1]);
    if(ara[0][0]==ara[1][0] && ara[0][0]==ara[2][0] && (max(ara[0][1],ara[1][1])>ara[2][1] && min(ara[0][1],ara[1][1])<ara[2][1])){
        cost+=2;
    }
    if(ara[0][1]==ara[1][1] && ara[0][1]==ara[2][1] && (max(ara[0][0],ara[1][0])>ara[2][0] && min(ara[0][0],ara[1][0])<ara[2][0])){
        cost+=2;
    }
    return cost;
}

int main()
{
    cin.tie(NULL);
    //read
    //write
    ios_base::sync_with_stdio(false);
    lld t;
    cin>>t;
    while (t--)
    {
        cout<<solve()<<endl;
    }
    
    return 0;
}
