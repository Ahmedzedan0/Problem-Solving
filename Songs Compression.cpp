#include <bits/stdc++.h>
using namespace std;
/* If it is impossible to copy all the songs (even if Ivan compresses all the songs), print "-1".
 Otherwise print the minimum number of songs Ivan needs to compress. */

int main()
{
    long long  n, m, a, b;
    long long total = 0;
    cin >> n >> m;
    long long arr[1000001];
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        total += a;
        arr[i] = b - a;//arr[i] = - [10-8, 7-4, 3-1, 5-4]
    }

    sort(arr, arr + n);//[-3,-2,-2,-1]

    int j = 0;
    
    if (total <= m) // no need to compress
        cout << 0;
    
    else
    {
        
        while (total > m && j < n)
        {
            total += arr[j];
            j++;
        }
    
        if (total > m )
        {
            cout << "-1";
        }
        else
        {
            cout << j;
        }
    }
    
    return 0;
}