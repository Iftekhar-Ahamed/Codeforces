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
const int mXs = 1e7;
const double pi = acos(-1.0);

int main()
{
    cin.tie(NULL);
    //read;
    //write;
    ios_base::sync_with_stdio(false);
    lld a, b, x, i;
    cin >> a >> b >> x;
    char A='0',B='1';

    if(a<b){
        swap(a,b);
        swap(A,B);
    }

    if (x == 1)
    {
        for (i = 0; i < b; i++)
            cout << B;
        for (i = 0; i < a; i++)
            cout << A;
    }
    else if (x % 2 == 0)
    {
        for(i=1;i<=x/2;i++){
            cout<<A<<B;
            a--,b--;
        }
        for(i=0;i<b;i++){
            cout<<B;
        }
        for(i=0;i<a;i++){
            cout<<A;
        }

    }else{
        for(i=1;i<=x/2;i++){
            cout<<A<<B;
            a--,b--;
        }
        for(i=0;i<a;i++){
            cout<<A;
        }
        for(i=0;i<b;i++){
            cout<<B;
        }
    }

    return 0;
}
