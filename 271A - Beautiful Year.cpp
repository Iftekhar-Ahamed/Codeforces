#include <bits/stdc++.h>
using namespace std;

int main()
{
    int year, array[5], m = 0, n = 0, temp,i,j;
    scanf("%d", &year);
    while (1)
    {
        year++;
        temp = year;
        for ( i = 0; i < 4; i++)
        {
            array[i] = temp % 10;
            temp = temp / 10;
        }
        for (i = 0; i < 4; i++)
        {
            for (j = i + 1; j < 4; j++)
            {
                if (array[i] == array[j])
                    m++;
                else
                    n++;
            }
        }
        if (m == 0)
        {
            printf("%d\n", year);
            break;
        }
        else
        {
            m = 0;
            n = 0;
        }
    }

    return 0;
}
