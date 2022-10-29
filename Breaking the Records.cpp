// #include <bits/stdc++.h>
// using namespace std;

// pair<int, int> f(int n, int arr[])
// {
//     pair<int,int> ans={0,0};
//     int low = arr[0], high = arr[0];
//     for(int i = 1; i < n; ++i)
//     {
//         if(arr[i]>high)
//         {
//             high = arr[i];
//             ans.first++;
//         }
//         if (arr[i] < low)
//         {
//             low = arr[i];
//             ans.second++;
//         }
//     }

//     return ans;

// }
    

// int main()
// {   
//     int n;
//     cin>>n;
//     int arr[1001];
//     for(int i = 0;i<n;++i)
//     {
//         cin>>arr[i];
//     }
//     pair<int,int> ans = f(n, arr);
//     cout<<ans.first<<" "<<ans.second<<"\n";
//     return 0;
// }