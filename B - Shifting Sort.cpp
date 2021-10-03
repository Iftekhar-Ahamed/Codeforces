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
#include <limits.h>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <iomanip>
using namespace std;

#define read freopen("0_input.txt","r",stdin)
#define write freopen("0_output.txt","w",stdout)
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
    //read
    //write
    ios_base::sync_with_stdio(false);
    vector<pair<lld,lld>>trace;
    vector<lld>data;
    lld i,j,n,minimum,t;

    cin>>t;

    while (t--)
    {
        cin>>n;
        trace.clear(),data.clear();
        data.resize(n);

        for(i=0;i<n;i++)cin>>data[i];

        for(i=0;i<n;i++){
            minimum=i;
            for ( j = i+1; j < n; j++)
            {
                minimum=data[minimum]>data[j]?j:minimum;
            }

            if(minimum>i){
                trace.push_back({i+1,minimum+1});
                lld temp=data[minimum];

                for ( j = minimum; j > i; j--)
                {
                    data[j]=data[j-1];
                }

                data[i]=temp;
                
            }
            
        }

        cout<<trace.size()<<endl;
        for(auto it=trace.begin();it!=trace.end();it++){
            cout<<it->first<<" "<<it->second<<" "<<it->second-it->first<<endl;
        }
    }
    

    return 0;
}
