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
    string s;
    cin>>s;
    lld h=0,e=0,l=0,o=0;
    cin>>s;
    lld n=s.size(),i;
    for(i=0;i<n;i++){
        if(s[i]=='h'){
            h++;
        }else if(s[i]=='e'&& h>=1){
            e++;
        }else if(s[i]=='l'&& e>=1){
            l++;
        }else if(s[i]=='o'&& l>=2){
            cout<<"YES\n";return 0;
        }
    }
    cout<<"NO\n";
    return 0;
}
