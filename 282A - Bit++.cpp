#include <bits/stdc++.h>
using namespace std;
int solve(string s)
{
    if (s == "X++" || s == "++X")
        return 1;
    else
        return -1;
}
int main()
{
    int count = 0, t;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> s;
        count += solve(s);
    }

    cout << count << endl;
    //main();
    return 0;
}
