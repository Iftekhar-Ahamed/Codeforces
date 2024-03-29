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

int main()
{
    cin.tie(NULL);
    //read;
    //write;
    ios_base::sync_with_stdio(false);
    lld t, n, i;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n % 2 == 0)
        {
            for (i = 2; i <= n; i += 2)
            {
                cout << i << " " << i - 1 << " ";
            }
        }
        else
        {
            for (i = 1; i <n-1; i++)
            {
                if(i%2!=0)
                cout << i+1 << " ";
                else
                cout << i-1 << " ";
            }
            cout<<n<<" "<<n-2;
        }
        cout<<endl;
    }

    return 0;
}
