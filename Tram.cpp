    /*
    4
    0 3
    2 5
    4 2
    4 0
    at last station = 3+5+2 - 2-4-4 = 0 
    3-2 + 5 = (6) 
    6 - 4 + 2 = 4
    4-4 = 0 
    */
    #include <bits/stdc++.h>
    using namespace std;
    int main()
    {
        int n;
        cin>>n;
        int out,in;
        int arr[10001];
        int sum = 0;
        for(int i=0;i<n;i++) 
        {    
            cin>>out>>in;
            sum+= (in - out);
            arr[i] = sum;

        }
        cout << *max_element(arr, arr + n);
        return 0;
    }