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
vector<lld>l;
void build(){
    lld i,number,x;
    for(i=1;i<=9;i++){
        number=i;
        x=10;
        while (number<=999999999)
        {
            l.push_back(number);
            number+=(i*x);
            x*=10;
        }
    }
}
void solve(){
    lld count=0,temp;
    cin>>temp;
    while (l[count]<=temp)count++;
    cout<<count<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    build();
    sort(l.begin(),l.end());
    lld t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}
