#include <bits/stdc++.h>
using namespace std;
vector<int> data[10002];
void preoad()
{
    int i, j, k;
    for (i = 2; i <= 10000; i++)
    {
        for (j = i + i; j <= 10000; j += i)
        {
            data[j].push_back(i);
        }
    }
}
int main()
{
    preoad();
    int n, m, count = 0;

    cin >> n >> m;

    if (m > n)
    {
        if (m % n != 0 && data[m].size()&&n!=1)
        {
            vector<int>::iterator it;
            it = upper_bound(data[m].begin(), data[m].end(), n);

            if (--it != data[m].begin())
            {
                if (it + 1 != data[m].end())
                {
                    if (n - *it <= *(it + 1) - n)
                    {
                        count += (n - *it);
                        n = *it;
                    }
                    else
                    {
                        count += (*(it + 1) - n);
                        n = *(it + 1);
                    }
                }
                else
                {
                    count += (n - *it);
                    n = *it;
                }
            }
        }else if(data[m].size()==0||n==1){
            //if(data[m].size()==0)count++;
            while (n*2<m)
            {
               count++;
               n*=2; 
            }
            cout << count + ((n*2-m))+1 << endl;
            return 0;
        }
        cout << count + ((m / n) / 2) << endl;
    }
    else
    {
        cout << n-m << endl;
    }

    return 0;
}
