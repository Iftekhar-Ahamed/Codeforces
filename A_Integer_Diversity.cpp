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
#include <unordered_map>
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
#define mXs 1000000
#define test long long int ct;cin>>ct;while(ct--)
const double pi = acos(-1.0);
void solve(){
    lld x,n,i;
    map<lld,lld>data;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>x;
        data[x]++;
    }
    lld count=0;
    for(auto it=data.begin();it!=data.end();it++){
        lld t=-it->first;
        if(it->second>=2 && data.find(t)==data.end()){
            count+=2;
        }else if(it->second!=0){
            count++;
        }
    }
    cout<<count<<endl;
}

int main()
{
    cin.tie(NULL);
    //read;
    //write;
    ios_base::sync_with_stdio(false);
    test{
        solve();
    }
    return 0;
}