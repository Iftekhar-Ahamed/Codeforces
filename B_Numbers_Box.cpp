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

lld adj[2][4] = {{1, -1, 0, 0}, {0, 0, 1, -1}};

int main()
{
    cin.tie(NULL);
    //read;
    //write;
    ios_base::sync_with_stdio(false);
    lld t;
    cin >> t;
    lld n, m, i, j, k;
    while (t--)
    {
        cin >> n >> m;
        lld arra[n + 2][m + 2], sum = 0;

        for (i = 0; i < n + 2; i++)
        {
            arra[i][0] = 1;
            arra[i][n + 1] = 1;
        }

        for (i = 0; i < m + 2; i++)
        {
            arra[0][i] = 1;
            arra[n + 1][i] = 1;
        }

        for (i = 1; i < n; i++)
        {
            for (j = 1; j < m; j++)
                cin >> arra[i][j];
        }

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                if (arra[i][j] < 0)
                {
                    for (k = 0; k < 4; k++)
                    {
                        if (arra[adj[0][k]][adj[1][k]] <= 0)
                            break;
                    }
                }else{
                    sum+=arra[i][j];
                }
            }
        }
    }

    return 0;
}