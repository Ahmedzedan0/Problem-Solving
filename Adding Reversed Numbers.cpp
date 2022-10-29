// //https://vjudge.net/contest/518555#problem/B
// #include <iostream>
// using namespace std;
// // I/P
// // 3
// // 24 1 -> 42 + 01 = 43 -> 34
// // 4358 754 -> 8534 + 457 = 8991 -> 1998
// // 305 794 -> 503 + 497 = 1000 -> 0001 -> 1
// // -----------
// // O/P
// // 34
// // 1998
// // 1
// int inplace_reverse(int val)
// {   // val = 123
//     int res = 0;
//     while(val > 0)
//     {
//         res = res * 10;
//         res = res + val % 10; // 3
//         val = val / 10; // 12 
//     }
//     return res;
// }
// int main()
// {   
//     int t;  
//     cin >> t; // 3 2 1
//     while(t--) // stop when t == 0
//     {
//         int x,y;
//         cin>>x>>y;
//         x = inplace_reverse(x);
//         y = inplace_reverse(y);
//         cout << inplace_reverse(x + y)<<"\n";
        
//     }
//      return 0;
// }
