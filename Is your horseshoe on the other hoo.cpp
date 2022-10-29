#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int> colors;
    for(int i=0;i<4;i++)
    {
        int val;
        cin>>val;
        colors[val] = val;
    }
    cout<<4-colors.size();
}