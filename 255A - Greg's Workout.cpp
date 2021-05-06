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
    lld n, i;
    cin >> n;
    lld arra[3] = {0, 0, 0}, x;
    for (i = 1; i <= n; i++)
    {
        cin >> x;
        arra[i % 3]+=x;
    }
    if (arra[0] > arra[1] && arra[0] > arra[2])
    {
        cout << "back\n";
    }
    else if (arra[1] > arra[0] && arra[1] > arra[2])
    {
        cout << "chest\n";
    }
    else
    {
        cout << "biceps\n";
    }
    return 0;
}
