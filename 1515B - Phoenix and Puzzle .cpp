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
bool squre(lld x){
    lld t=sqrt(x);
    return t*t==x;
}
int main()
{
    ios_base::sync_with_stdio(false);
    lld n,t;
    cin>>t;
    while (t--)
    {
        cin>>n;

        if((n%2==0 && squre(n/2))|| (n%4==0 && squre(n/4))){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    
    return 0;
}
