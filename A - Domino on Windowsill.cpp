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
#define read freopen("input.txt", "r", stdin)
#define write freopen("output.txt", "w", stdout)
#define MEM(a, b) memset(a, (b), sizeof(a))
#define _for(i, j, k, in) for (int i = j; i < k; i += in)
#define _rfor(i, j, k, in) for (int i = j; i >= k; i -= in)
#define _foritaretor(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define MP make_pair
#define PB push_back
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
const double pi = acos(-1.0);

bool solve(){
    lld n,k1,k2,w,b;
    cin>>n>>k1>>k2>>w>>b;
    lld wmax=min(k1,k2);
    wmax+=(max(k1,k2)-min(k1,k2))/2;
    lld bmax=n-max(k1,k2);
    bmax+=((n-min(k1,k2))-(n-max(k1,k2)))/2;
    if(wmax>=w && bmax>=b)return true;
    return false;
}


int main()
{
	ios_base::sync_with_stdio(false);
	//read;write;
    lld t;
    cin>>t;
    while (t--)
    {
        if(solve())cout<<"YES\n";
        else cout<<"NO\n";
    }
    
	return 0;
}
