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
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
const double pi = acos(-1.0);


int main()
{
    ios_base::sync_with_stdio(false);
    //read;write;
    lld t,a,b,c,g;
	cin>>t;
	while (t--)
	{
		cin>>a>>b>>c;
		g=pow(10,c-1);
		lld x=g,y=g,temp=pow(10,a-1);
		while (x<temp)
		{
			x*=2;
		}
		temp=pow(10,b-1);
		while (y<temp)
		{
			y*=3;
		}
		cout<<x<<" "<<y<<endl;
		
	}
	
    return 0;
}
