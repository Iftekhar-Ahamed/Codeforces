#include <bits/stdc++.h>
#define lld long long int
using namespace std;

int main()
{

    //freopen("input.txt", "r", stdin);

    lld n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    cout << min((k * l / nl), min(c * d, p / np))/n << endl;
    return 0;
}
