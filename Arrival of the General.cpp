#include <bits/stdc++.h>
using namespace std;
/*
we need to make minpos as small as possible,
so we keep it smallest pos.
We do not use condition "<" here since there may be a 0
in array in that case every position till 0 will be considered minimum,
so we need one special value less than this,
so that it can be max.
*/

int main()
{
    int max = 0, maxPos = 0, min = 101, minPos = 0;
    int length;
    cin >> length;

    for(int i = 0; i < length; i++)
    {
        int iNum;
        cin >> iNum;
        if(iNum > max)
        {
            max = iNum;
            maxPos = i;
        }

        if(iNum <= min)
        {
            min = iNum;
            minPos = i;
        }
        
    }
    
    if (maxPos > minPos)
    {
        cout << (maxPos - 1) + (length - minPos) - 1;
    }
    
    else
    {
        cout << (maxPos - 1) + (length - minPos);
    }
    return 0;
}