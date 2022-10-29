// C++ program to find minimum difference
// between max and min of all subset of K size
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p,n;
    cin>>p>>n;
    int arr[10001];
    for(int i = 0; i < n; i++)
        cin>> arr[i];

    sort(arr, arr + n);

    // initialize result by a big integer number
    int res = 99999;

    for (int i = 0; i <= (n - p); i++)
    {
        // get difference between max and
        // min of current K-sized segment
        int Diff = arr[i + p - 1] - arr[i]; 
        res = min(res, Diff);
    }
    cout<<res;
    return 0;
}
