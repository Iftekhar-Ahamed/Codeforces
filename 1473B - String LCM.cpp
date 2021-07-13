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
void solve(){
    string s1,s2,ans1,ans2;
    cin>>s1>>s2;
    lld n1=s1.size(),n2=s2.size(),lc;
    lc=(n1*n2)/__gcd(n1,n2);
    lld v1=lc/n1,i;
    for(i=0;i<v1;i++){
        ans1+=s1;
    }
    lld v2=lc/n2;
    for(i=0;i<v2;i++){
        ans2+=s2;
    }
    if(ans1==ans2){
        cout<<ans1<<endl;
    }else{
        cout<<-1<<endl;
    }

}

int main()
{
    cin.tie(NULL);
    //read;
    //write;
    ios_base::sync_with_stdio(false);
    lld t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}
