/***
**      Bismillahir Rahmanir Rahim
**              ALLAHU AKBAR
**
**     Author: Iftekhar Ahamed Siddiquee
**     Bangladesh University of Business and Technology,
**     Dept. of CSE.
***/
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

#define read freopen("0_input.txt", "r", stdin)
#define write freopen("0_output.txt", "w", stdout)
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int uint64;
#define lld long long int
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define mXs 1e6
const double pi = acos(-1.0);

int main()
{
    cin.tie(NULL);
    // read;
    // write;
    ios_base::sync_with_stdio(false);
    lld t, n, i, j;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<vector<lld>> data(n);
        for (i = 0; i < n; i++)
        {
            data[i].resize(n, 0);
        }
        for (i = 0; i < n; i++)
        {
            data[i][i] = 1;
            data[i][n - i - 1] = 1;
        }
        if (n % 2)
        {
            data[n / 2 - 1][n / 2] = 1;
            data[n / 2][n / 2 + 1] = 1;
        }
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}