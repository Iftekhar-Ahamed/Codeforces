#include <bits/stdc++.h>
#define lld long long int
using namespace std;
bool lucky(lld num)
{
    int temp;
    while (num != 0)
    {
        temp = num % 10;
        if (abs(temp) == 8)
            return false;
        num /= 10;
    }
    return true;
}
int main()
{
    lld num, count = 1;
    cin >> num;
    while (lucky(++num))
        count++;

    cout<<count<<endl;
    return 0;
}
