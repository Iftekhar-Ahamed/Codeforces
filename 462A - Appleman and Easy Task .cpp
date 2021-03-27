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
bool check(vector<string>data){
	int n=data.size(),i,j,sum=0;
	_for(i,0,n,1){
		sum=0;
		_for(j,0,n,1){
			if(data[i][j+1]=='o'&&(j+1)<n){
                sum++;
            }
            if(data[i][j-1]=='o'&&(j-1)>=0){
                sum++;
            }
            if((i-1)>=0 && data[i-1][j]=='o'){
                sum++;
            }
            if((i+1)<n && data[i+1][j]=='o'){
                sum++;
            }
			if(sum%2!=0)return false;
		}
	}
	return true;
}
int main()
{
	ios_base::sync_with_stdio(false);
	//	read;write;
	vector<string>data;
	int n,i;
	while (cin>>n)
	{
		data.resize(n);
		_for(i,0,n,1)cin>>data[i];
		if(check(data))cout<<"YES\n";
		else cout<<"NO\n";
	}
	
    
	return 0;
}
