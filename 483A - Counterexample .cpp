#include <bits/stdc++.h>
#define lld long long int
using namespace std;
lld gcd(lld a, lld b)
{
    if (a % b == 0)
        return b;
    return gcd(b, a % b);
}
int main()
{
    //freopen("input.txt", "r", stdin);

    lld a, b, i, j, k;
    cin >> a >> b;

    for (i = a; i <= b - 2; i++)
    {
        for (j = i + 1; j <= b - 1; j++)
        {
            for (k = j + 1; k <= b; k++)
            {
                if (gcd(i, j) == 1 && gcd(j, k) == 1 && gcd(i, k) != 1){
                    cout<<i<<" "<<j<<" "<<k<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<-1<<endl;
    return 0;
}
