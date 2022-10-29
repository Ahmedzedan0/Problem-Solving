#include <bits/stdc++.h>
using namespace std;
// 3 5 2 = 10 + 10 + 6 = 26
int main()
{
    int n;
    cin >> n;
    int arr[100003];
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    long long val;
    cin >> val; // 26 
    long long j = 0;

    long long ans = (val/sum)*n; // 26/10 = 2 cycles   ->  2 * 3(num of elements) = index 6
    val = val % sum; // 26 % 20 = 6

    while(val >= 0)
    {
        val -= arr[j++];
        ans++; // index 6 + 1 + 1 = 8
    }
    cout<<ans<<"\n";
}

//26 % 20 = 6
// 6 - 3 -> 1 cycle
// 3 - 5 -> 1 cycle
// answer == 6 + 2 cycles -> 8 
// 3 5 2   3 5 2   3 5  = 10 + 10 + 6 = 26