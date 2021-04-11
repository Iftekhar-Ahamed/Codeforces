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
	lld t;
	cin>>t;
	while (t--)
	{
		lld n,peek;
		cin>>n>>peek;
		int arry[n+1];
		if(n<=2 && peek!=0){
			cout<<-1<<endl;
		}else{
			bool flag=false;
			for(lld l=1,r=n,i=0;i<n;i++){
				if(flag&&peek!=0&& i+1!=n){
					arry[i]=r;
					r--;
					peek--;
					flag=false;
				}else{
					arry[i]=l;
					l++;
					flag=true;
				}
			}
			if(peek<=0){
				for(lld i=0;i<n;i++){
					cout<<arry[i]<<" ";
				}
				cout<<endl;
			}else{
				cout<<-1<<endl;
			}
		}
	}
	
	return 0;
}
