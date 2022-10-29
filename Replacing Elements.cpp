#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,d;
        cin>>n>>d;
        int arr[101];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr, arr + n);
        if(arr[n-1] <= d || arr[0] + arr[1] <= d)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}