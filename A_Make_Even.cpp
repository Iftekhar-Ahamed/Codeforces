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
    //read;
    //write;
    ios_base::sync_with_stdio(false);
    lld t;
    bool ans;
    cin >> t;
    while (t--)
    {
        ans=false;
        string s;
        cin >> s;
        if (int(s[s.size() - 1] - '0') % 2 == 0)
        {
            cout << 0 << endl;
        }
        else if (int(s[0] - '0') % 2 == 0)
        {
            cout << 1 << endl;
        }
        else
        {
            for (lld i = 1; i < s.size()-1; i++)
            {
                if (int(s[i] - '0') % 2 == 0)
                {
                    ans=true;
                    break;
                }
            }
            if(ans){
                cout<<2<<endl;
            }else{
                cout<<-1<<endl;
            }
        }
    }

    return 0;
}