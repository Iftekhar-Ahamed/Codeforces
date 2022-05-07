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
    //read;
    //write;
    ios_base::sync_with_stdio(false);
    lld t,n,i,j,a,b;
    cin>>t;
    while (t--)
    {
        cin>>n>>a>>b;
        lld limit=(n/2);
        vector<lld>ans_left;
        vector<lld>ans_right;
        map<int,bool>trace;
        trace[a]=true;
        trace[b]=true;
        ans_left.push_back(a);
        ans_right.push_back(b);
        for(i=b+1;limit!=1 && i<=n && i> a;i++){
            if(!trace[i]){
                ans_left.push_back(i);
                trace[i]=true;
                limit--;
            }
        }
        for(i=a+1;limit!=1 && i<=n ;i++){
            if(!trace[i]){
                ans_left.push_back(i);
                trace[i]=true;
                limit--;
            }
        }
        limit=n/2;
        for(i=1;i<b && limit!=1;i++){
            if(!trace[i]){
                ans_right.push_back(i);
                limit--;
            }
        }
        if((ans_right.size()+ans_left.size())==n){
            for(i=0;i<n/2;i++){
                cout<<ans_left[i]<<" ";
            }
            for(i=0;i<n/2;i++){
                cout<<ans_right[i]<<" ";
            }
            cout<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
    
    return 0;
}