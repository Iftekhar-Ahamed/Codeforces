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
#define _mem(a, b) memset(a, (b), sizeof(a))
#define _for(i, j, k, in) for (int i = j; i < k; i += in)
#define _rfor(i, j, k, in) for (int i = j; i >= k; i -= in)
#define _foritaretor(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define MP make_pair
#define PB push_back
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
const double pi = acos(-1.0);



int main()
{
	ios_base::sync_with_stdio(false);
	//read;
    //write;
    lld n,m;
    cin>>n>>m;

    int data[n][m],j,i,best[m],count=0;
    char c;
    _mem(best,0);

    _for(i,0,n,1){
        _for(j,0,m,1){
            cin>>c;
            data[i][j]=c-'0';
            if(best[j]<c-'0')best[j]=c-'0';
        }
    }
    _for(i,0,n,1){
        _for(j,0,m,1){
            if(best[j]==data[i][j]){
                count++;
                break;
            }
        }
    }
    cout<<count<<endl;
	return 0;
}   
