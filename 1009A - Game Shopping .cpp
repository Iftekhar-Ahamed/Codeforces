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
#define mXs 1e6
const double pi = acos(-1.0);

int main()
{
    ios_base::sync_with_stdio(false);
    lld n,m,i,j;
    cin>>n>>m;
    lld a[n+1],b[m+1];
    for(i=0;i<n;i++)cin>>a[i];
    for(i=0;i<n;i++)cin>>b[i];
    for(i=0,j=0;i<n&&j<m;i++)if(b[j]>=a[i])j++;
    cout<<j<<endl;
    return 0;
}
