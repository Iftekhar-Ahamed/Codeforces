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
	lld r, c, i, j, k, u, d, l = INF, ri = -INF;
	bool f1 = true, f2 = false, f3 = false;
	while (cin >> r >> c)
	{
		char ch[r][c];
		for (i = 0; i < r; i++)
		{
			for (j = 0; j < c; j++)
			{
				cin >> ch[i][j];
				if (ch[i][j] == '*' && f1)
				{
					u = i, f1 = false;
				}
				if (ch[i][j] == '*')d=i;
				if (ch[i][j] == '*' && j < l)
					l = j;
				if (ch[i][j] == '*' && ri < j)
					ri = j;
			}
		}
		for (i = u; i <= d; i++)
		{
			for (j = l; j <= ri; j++)
				cout << ch[i][j];
			cout << endl;
		}
	}
	return 0;
}
