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
struct data
{
	lld d;
	struct data *prev, *next;
} *start = NULL, *last = NULL;

void push(lld x)
{
	struct data *tem, *n;
	n = new struct data;

	n->d = x;
	n->next = NULL;

	if (start == NULL)
	{
		n->prev = NULL;
		start = n;
		last = n;
	}
	else
	{
		last->next = n;
		n->prev = last;
		last = n;
	}
}
void push_front(lld x)
{
	struct data *tem;
	tem = new struct data;
	start->prev = tem;
	tem->prev = NULL;
	tem->d = x;
	tem->next = start;
	start = tem;
}
void pop(struct data *n)
{
	if (n->next == NULL)
	{
		n->prev->next = NULL;
	}
	else
	{
		n->prev->next = n->next;
		n->next->prev = n->prev;
	}
	delete (n);
}

void travarse(lld x)
{
	struct data *tem = start, *n;
	lld i = 1;
	while (tem->d != x)
	{
		tem = tem->next;
		i++;
	}
	cout << i << " ";
	if (i != 1)
	{
		pop(tem);
		push_front(x);
	}
}

void print()
{
	struct data *tem = start;
	while (tem != NULL)
	{
		cout << tem->prev << " " << tem->d << " " << tem->next << endl;
		tem = tem->next;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	//read;write;
	lld n, k, i, x;
	cin >> n >> k;
	for (i = 0; i < n; i++)
	{
		cin >> x;
		push(x);
	}
	for (i = 0; i < k; i++)
	{
		//print();
		cin >> x;
		travarse(x);
	}
	cout << endl;
	return 0;
}
