#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    int num, i, j, row, collum;

    for (i = 1; i <= 5; i++)
        for (j = 1; j <= 5; j++)
        {
            cin >> num;
            if (num != 0)
            {
                row = i;
                collum = j;
            }
        }
    
    cout<<abs(3-row)+abs(3-collum)<<endl;
    //main();
    return 0;
}
