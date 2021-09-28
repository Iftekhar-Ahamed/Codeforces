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
#include <limits.h>
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
#define mXs 101
const double pi = acos(-1.0);

lld arra[mXs];
lld u,p,n;

lld calculate(lld i){

    
    if(arra[i]==arra[i-1]){
        return p+min(u,p);
    }else if(abs(arra[i-1]-arra[i])>=2){
        return 0;
    }
    else{
        return min(u,p);
    }
}
int main()
{
    cin.tie(NULL);
    //read
    //write
    ios_base::sync_with_stdio(false);

    lld t,i,ans;
    cin>>t;

    while (t--)
    {

        cin>>n>>u>>p;
        ans=INT_MAX;

        for(i=1;i<=n;i++)cin>>arra[i];

        for(i=2;i<=n;i++){

            ans = min(calculate(i),ans);
            
        }

        cout<<ans<<endl;

    }
    

    return 0;
}
