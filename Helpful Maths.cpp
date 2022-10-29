#include <bits/stdc++.h>
using namespace std;
int main()
{
    string equ; //"123” 
    cin >> equ;
    int mySize = (equ.length() / 2) + 1;
    int arr[mySize];
    int counter = 0;
    for (int i = 0; i < equ.length(); i++)
    {
        if (equ[i] == '+')
            continue;
        
        arr[counter] = equ[i] - '0'; // ask here 
        counter++;
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);
    for (int i = 0; i < mySize; i++)
    {
        cout << arr[i];
        if (i != n - 1) //if i is not the last element
            cout << "+";
    }
}








// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int arr[1001];
//     string s;
//     cin >> s;
//     int count = 0;
//     for (int i = 0; i < s.size(); i++)
//     {
//         if (s[i] == '+')
//         {
//             continue;
//         }
//         else
//         {
//             arr[count++] = s[i] - '0';
//         }
//     }
//     sort(arr, arr + count);
//     for (int i = 0; i < count; i++)
//     {
//         cout << arr[i];
//         if (i == count - 1)
//         {
//             break;
//         }
//         cout << "+";
//     }
//     return 0;
// }