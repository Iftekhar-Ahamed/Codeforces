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
    lld t;
    string s,temp;
    cin>>t;
    while (t--)
    {
        cin>>s;
        if(s.size()>5)
        temp=s.substr(s.size()-5,5);
        else
        temp=s;
        if(temp.find("po")!=string::npos){
            cout<<"FILIPINO\n";
        }else if(temp.find("desu")!=string::npos||temp.find("masu")!=string::npos){
            cout<<"JAPANESE\n";
        }else if(temp.find("mnida")!=string::npos){
            cout<<"KOREAN\n";
        }

    }
    
    return 0;
}
