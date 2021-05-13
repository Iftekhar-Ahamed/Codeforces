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

int main()
{
    ios_base::sync_with_stdio(false);
    int a1, b1, a2, b2;
    cin >> a1 >> b1 >> a2 >> b2;
    if (abs(a1 - a2) == abs(b1 - b2))
        cout << a1 << " " << b2 << " " << a2 << " " << b1 << endl;
    else if (a1 == a2)
        cout << a1 + abs(b1 - b2) << " " << b1 << " " << a2 + abs(b1 - b2) << " " << b2 << endl;
    else if (b1 == b2)
        cout << a1 << " " << b1 + abs(a1 - a2) << " " << a2 << " " << b2 + abs(a1 - a2) << endl;
    else
        cout << -1 << endl;

    return 0;
}
