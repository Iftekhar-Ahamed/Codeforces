#include <bits/stdc++.h>
using namespace std;
long long int nc2(int n)
{
	return n * (n - 1) / 2;
}
int main()
{
	long long int t, n, i, x, a, b;
	cin >> t;
	while (t--)
	{
		cin >> a >> b >> n;

		map<int, int> boy, girl;
		map<int, int>::iterator it;
		for (i = 0; i < n; i++)
		{
			cin >> x;
			boy[x]++;
		}
		for (i = 0; i < n; i++)
		{
			cin >> x;
			girl[x]++;
		}
		if (n < 2){
			cout << "0\n";
			continue;
		}	
		n = nc2(n);
		for (it = boy.begin(); it != boy.end(); it++)
			if (it->second >= 2)
				n -= nc2(it->second);
		for (it = girl.begin(); it != girl.end(); it++)
			if (it->second >= 2)
				n -= nc2(it->second);
		cout << n << endl;
	}
	return 0;
}
