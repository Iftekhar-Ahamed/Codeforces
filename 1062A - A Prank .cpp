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

typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int uint64;
#define lld long long int
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
const double pi = acos(-1.0);
lld solve(){
    lld n,i,Max=0,count=1,now,x,y;
    cin>>n;
    vector<lld>data;
    data.push_back(-2);
    data.push_back(0);
    for(i=0;i<n;i++){
        cin>>now;
        data.push_back(now);
    }
    data.push_back(1e3+1);
    data.push_back(1e3+3);
    x=0;
    for(i=1;i<n+4;i++){
        if(data[i]-data[i-1]!=1){
            Max=max(Max,i-x);
            x=i;
        }
    }
    return Max-2;
}
int main()
{
    ios_base::sync_with_stdio(false);
    lld ans=solve();
    cout<<(ans<0?0:ans)<<endl;
    
    return 0;
}
