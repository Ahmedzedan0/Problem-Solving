// // problem: https://vjudge.net/contest/518555#problem/A
// #include <iostream>
// //#include <bits/stdc++.h>
// using namespace std;
// int ChoosingTeams()
// {
//     int n, k;
//     cin >> n >> k;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     ////////////////////////////////////
//     int members = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if ((arr[i]+5) <= k)
//         {
//             members++;
//         }
//     }
//     int teams = members / 3;
//     return teams;
// }

// int main()
// {
//     cout<<ChoosingTeams();
//     return 0;
// }