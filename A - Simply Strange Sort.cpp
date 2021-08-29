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
const int mXs = 1010;
const double pi = acos(-1.0);
int ara[mXs], n, i, c, t;
void f1()
{

    int renge = n - 2;

    i = 1;
    while (i <= renge)
    {
        if (ara[i] > ara[i + 1])
        {
            swap(ara[i], ara[i + 1]);
        }
        i += 2;
    }
}
void f2()
{

    int renge = n - 1;
    i = 2;
    while (i <= renge)
    {
        if (ara[i] > ara[i + 1])
        {
            swap(ara[i], ara[i + 1]);
        }
        i += 2;
    }

}
bool compare(int n,int arra1[],int arra2[])
{
    for (int i = 1; i <= n; i++)
    {
        //cout<<arra1[i-1]<<" "<<arra2[i]<<endl;
        if(arra1[i-1]!=arra2[i])
        {
            //cout<<endl;
            return false;
        }
    }
    //cout<<endl;
    return true;
}
void print_array(int arra[],int n,int i)
{
    for (; i <= n; i++)
    {
        cout<<arra[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    cin.tie(NULL);
    //read;
    //write;
    ios_base::sync_with_stdio(false);
    cin >> t;
    while (t--)
    {
        cin >> n;
        int sort_array[n];
        c = 0;

        for (i = 1; i <= n; i++)
        {
            cin >> ara[i];
            sort_array[i-1]=ara[i];
        }

        sort(sort_array,sort_array+n);
        //print_array(sort_array,n-1,0);

        while (1)
        {



            if(!compare(n,sort_array,ara))c++;
            else break;
            f1();

            //print_array(ara,n,1);


            if(!compare(n,sort_array,ara))c++;
            else break;
            f2();
            //print_array(ara,n,1);

        }
        cout << c << endl;
    }

    return 0;
}
