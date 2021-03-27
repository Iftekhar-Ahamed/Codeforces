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
bool solve(int a,int b,int x[],int y[],int n){
	int i,count=0,f1=0,f2=0,f3=0,f4=0;
	_for(i,0,n,1){
		int _x=x[i],_y=y[i];
		if(_x==a &&_y==b)continue;
		if(_x>a && _y==b)f1=1;
		if(_x<a && _y==b)f2=1;
		if(_y>b && _x==a)f3=1;
		if(_y<b && _x==a)f4=1;

		if(f1&&f2&&f3&&f4)return true;

	}
	return false;
}
int main()
{
	ios_base::sync_with_stdio(false);
	//read;write;
	int n,i;
	while (cin>>n)
	{
		int x[n],y[n],count=0;
		_for(i,0,n,1)cin>>x[i]>>y[i];
		_for(i,0,n,1){
			if(solve(x[i],y[i],x,y,n))count++;
		}
		cout<<count<<endl;
	}
	
    
	return 0;
}
