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
    lld t,n1,m1,m2,n2;
    cin>>t;
    while (t--)
    {
        cin>>n1>>m1;
        cin>>n2>>m2;
        lld len1=log10(n1)+1,len2=log10(n2)+1;

        if(len1>len2){
            while(len1!=len2 && m2){
                n2*=10;
                len2++;
                m2--;
            }

        }else{
            while(len1!=len2 && m1){
                n1*=10;
                len1++;
                m1--;
            }
        }

        len1+=m1,len2+=m2;

        //cout<<n1<<" "<<n2<<endl;
        //cout<<m1<<" "<<m2<<endl;

        if(len1>len2){
            cout<<">"<<endl;
        }else if(len2>len1){
            cout<<"<"<<endl;
        }else{
            if{
                cout<<">"<<endl;
            }else if(n1<n2){
                cout<<"<"<<endl;
            }else{
                cout<<"="<<endl;
            }
        }
    }

    return 0;
}
