#include <iostream>
using namespace std;

int main()
{
    int n,d;
    cin>>n>>d;
    int arr[100001];
    for(int i=0; i<n; ++i)
        cin>>arr[i];
    for (int i = 0; i < n; ++i)
        cout<<arr[(d+i)%n]<<' ';
    return 0; 
}


/*
            d=2 -> [1,2,3,4,5] -> [3,4,5,1,2]

            (2+0) % 5 -> 2
            (2+1) % 5 -> 3
            (2+2) % 5 -> 4
            (2+3) % 5 -> 0
            (3+3) % 5 -> 1

            [3,4,5,1,2]

*/