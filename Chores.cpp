#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long n, k, x, chores[100+5], answer = 0;
    cin>> n >> k>> x;
    for(int i=0; i<n; i++)
    {
        cin>> chores[i];
    }

    // the number of chores Luba has to do -> n
    // the number of chores she can do in x units of time -> k
    // and the number x itself -> x
    // 4 2 2      -> n,k,x
    // 3 6 7 10   -> k1 k2 k3 k4
    //                       13
    
    for (int i = 0; i < n - k; i++) // 0 1 
    {
        answer = answer + chores[i];
    }

    answer = answer +  (k * x);
    cout<< answer;
    return 0;
}
  			  			    				 		  	   	