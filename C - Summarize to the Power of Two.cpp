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
const int mXs = 120001;
const double pi = acos(-1.0);
int arra[mXs];

int main()
{
    cin.tie(NULL);
    //read;
    //write;
    ios_base::sync_with_stdio(false);
    lld n,i,j,ans=0,sub;
    bool f;

    cin>>n;
    map<int,int>trace;
    for(i=0;i<n;i++)cin>>arra[i],trace[arra[i]]++;

    for(i=0;i<n;i++){
        f=true;
        for(j=0;j<31;j++){
            sub=(1<<j)-arra[i];
            if(trace.count(sub) && (trace[sub]>1 || sub!=arra[i])){
                f=false;break;
            }
        }
        if(f)ans++;
    }
    cout<<ans<<endl;
    return 0;
}
