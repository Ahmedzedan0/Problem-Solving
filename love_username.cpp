#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, max_score = 0, min_score = 0, amazing = 0;
    cin >> n;
    int arr[100001];
    bool flag = true;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (flag == true)
        {
            max_score = arr[0];
            min_score = arr[0];
            flag = false;
        }

        if (arr[i] > max_score)
        {
            max_score = arr[i];
            amazing++;
        }
        else if (arr[i] < min_score)
        {
            min_score = arr[i];
            amazing++;
        }
    }
    cout << amazing << "\n";
    return 0;
}