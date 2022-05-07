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
#include <unordered_map>
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
    //read;
    // write;
    ios_base::sync_with_stdio(false);
    lld t, i, j, k;

    cin >> t;
    while (t--)
    {
        string a, b, s;
        bool f = true;
        cin >> a >> s;
        string tem;
        for(i=a.size();i<s.size();i++)tem.push_back('0');
        a=tem+a;
        for (i = a.size() - 1, j = s.size() - 1; i >= 0; i--)
        {

            lld x = a[i] - '0', y;
            if(j<0){
                y=0;
            }else{
                y = s[j] - '0';
            }

            if (x > y && j - 1 >= 0)
            {
                j--;
                y += (10 * (s[j] - '0'));
            }
            if (x <= y)
            {
                char ch = (y - x) + '0';
                if (ch < '0' || ch > '9')
                {
                    f = false;
                    break;
                }
                b.push_back(ch);
                j--;
            }
            else
            {
                f = false;
                break;
            }
        }
        if (f)
        {
            reverse(b.begin(),b.end());
            i = 0;
            while (b[i] == '0' && b[i+1])
            {
                i++;
            }
            while (b[i])
            {
                cout << b[i++];
            }
            cout << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}