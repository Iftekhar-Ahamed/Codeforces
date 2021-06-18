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

#define read freopen("input.txt", "r", stdin)
#define write freopen("output.txt", "w", stdout)
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int uint64;
#define lld long long int
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define mXs 1000000
const double pi = acos(-1.0);
string solve()
{
    string s, temp;
    lld i, k, j, n;

    cin >> n >> s;
    for (i = 0; i < 26; i++)
    {
        temp.clear();
        temp += (char)('a' + i);
        if (s.find(temp) == string::npos)
        {
            return temp;
        }
    }
    for (i = 0; i < 26; i++)
    {
        for (j = 0; j < 26; j++)
        {
            temp.clear();
            temp += (char)('a' + i);
            temp += (char)('a' + j);
            if (s.find(temp) == string::npos)
            {
                return temp;
            }
        }
    }
    for (k = 0; k < 26; k++)
    {
        for (i = 0; i < 26; i++)
        {
            for (j = 0; j < 26; j++)
            {
                temp.clear();
                temp += (char)('a' + k);
                temp += (char)('a' + i);
                temp += (char)('a' + j);
                if (s.find(temp) == string::npos)
                {
                    return temp;
                }
            }
        }
    }
    return "";
}

int main()
{
    cin.tie(NULL);
    //read;
    //write;
    ios_base::sync_with_stdio(false);
    lld t;
    cin >> t;
    while (t--)
    {
        cout << solve() << endl;
    }

    return 0;
}
