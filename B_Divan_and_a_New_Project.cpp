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
    lld t,n,i,j,k,x;
    cin>>t;
    while (t--)
    {
        cin>>n;
        vector<pair<lld,lld>>data;
        for(i=0;i<n;i++){
            cin>>x;
            data.push_back({x,i});
        }

        sort(data.begin(),data.end());
        vector<pair<lld,lld>>ans;
        lld sum=0;
        j=1,k=-1;
        for(i=n-1;i>=0;i--){
            if(i%2==0){
                sum+=(2*data[i].first*j);
                ans.push_back({data[i].second,j++});
            }else{
                sum+=(2*data[i].first*(-1*k));
                ans.push_back({data[i].second,k--});
            }
        }
        cout<<sum<<endl;
        cout<<0<<" ";
        sort(ans.begin(),ans.end());
        for(i=0;i<n;i++){
            cout<<ans[i].second<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}